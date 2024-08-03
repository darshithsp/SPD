#include<stdio.h>
#include<stdlib.h>
#include"../inc/operations.h"

void display(struct snode *head)
{
    struct snode *ptr = head;

    if(ptr == NULL)
    {
        printf("Its an Empty List\n\n");
    }
    else
        while(ptr != NULL)
            {
                printf("Node value is %d\n",ptr->data);
                ptr = ptr->next;
            }
    printf("Ending of the list display\n\n");
}

struct snode* push(struct snode *head, int data)
{
    struct snode *ptr=head, *new;
    new = (struct snode*)malloc(sizeof(struct snode));
    new->data = data;
    new->next = NULL;
    if(ptr == NULL)
    {
        ptr = new;
        return ptr;
    }
    else
    {
        new->next = ptr;
        ptr = new;
        return ptr;
    }
}

struct snode* pop(struct snode *head)
{
    struct snode *ptr = head;
    if(ptr == NULL)
    {
        printf("Its an Empty Stack\n");
        return head;
    }
    else
    {
        printf("Popped Value is %d\n\n",ptr->data);
        ptr = ptr->next;
    }
    return ptr;
}



struct snode* insert_node(struct snode *head, int pos, int data)
{
    struct snode *ptr = head, *new;
    int count = 1;
    new = (struct snode*)malloc(sizeof(struct snode));
    new->data = data;
    new->next = NULL;
    if(pos < 0)
    {
        printf("\n\nInvalid Position value!! Please retry again!\n\n");
        return head;
    }
    else if((pos == 0) || (ptr == NULL))
    {
        if(ptr == NULL)
        {
            head = new;
        }
        else
        {
            new->next = head;
            head = new;
        }
        return head;
    }
    else
    {
        while(ptr != NULL)
        {
            if(count == pos)
                {
                    new->next = ptr->next;
                    ptr->next = new;
                    return head;
                }
            ptr = ptr->next;
            count++;
        }
    }
    if(pos >= count)
        {
            printf("\n\nInvalid Position Value!! Please retry again\nNOTE: Index Out of range\nNOTE: Index Out of range\nNOTE: Index Out of range\nNOTE: Index Out of range\n\n");
            return head;
        }
}










struct snode* delete_node(struct snode *head, int pos)
{
    int count = 0;
    struct snode *ptr = head, *prev=ptr;
    if(ptr == NULL)
    {
        printf("Its an empty List!!\n\n");
        return head;
    }
    else if( pos <0)
    {
        printf("\n\nInvalid Position value!! Please retry again!\n\n");
        return head;
    }
    else if(pos == 0)
    {
        printf("\nDeleted Node value is %d\n\n",ptr->data);
        head = head->next;
        return head;
    }
    else
    {
        while(ptr != NULL)
        {
            if(pos == (count+1) && (ptr->next != NULL))
            {
                printf("\nDeleted Node value is %d\n\n",ptr->next->data);
                ptr->next = ptr->next->next;
                free(ptr->next);
                return head;
            }
            ptr = ptr->next;
            count++;
        }
    }
    printf("%d\t%d",pos,count);
    if(pos >= count)
    {
        printf("\n\nInvalid Position Value!! Please retry again\nNOTE: Index Out of range\nNOTE: Index Out of range\nNOTE: Index Out of range\nNOTE: Index Out of range\n\n");
        return head;
    }
}



