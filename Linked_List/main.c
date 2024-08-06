#include<stdio.h>
#include<stdlib.h>
#include"inc/operations.h"

int main()
{

    /*---------------------LINKED LIST CREATION--------------------*/
    struct snode *head;
    struct snode *current;

    head = (struct snode*)malloc(sizeof(struct snode));
    head->data = 10;
    head->next = NULL;


    current = (struct snode*)malloc(sizeof(struct snode));
    current->data = 20;
    current->next = NULL;
    head->next = current;

    current = (struct snode*)malloc(sizeof(struct snode));
    current->data = 30;
    current->next = NULL;
    head->next->next = current;

    current = (struct snode*)malloc(sizeof(struct snode));
    current->data = 40;
    current->next = NULL;
    head->next->next->next = current;

    current = (struct snode*)malloc(sizeof(struct snode));
    current->data = 50;
    current->next = NULL;
    head->next->next->next->next = current;

    display(head);
    /*---------------------DELETE NODE OPERATION--------------------*/
    head = delete_node(head, -10);
    head = delete_node(head, 3);
    head = delete_node(head, 10);

    display(head);

    /*---------------------INSERT NODE OPERATION--------------------*/
    head = insert_node(head, -1, 111);
    head = insert_node(head, 0, 111);
    head = insert_node(head, 2, 111);
    head = insert_node(head, 10, 111);

    display(head);



    /*---------------------STACK OPERATIONS--------------------*/
    struct snode *shead;
    shead = (struct snode*)malloc(sizeof(struct snode));
    shead = NULL;

    shead = push(shead,10);
    shead = push(shead,30);
    shead = push(shead,50);
    shead = push(shead,70);
    shead = push(shead,90);
    shead = push(shead,110);
    shead = push(shead,130);
    display(shead);
    shead = pop(shead);
    shead = pop(shead);
    shead = pop(shead);
    shead = pop(shead);
    shead = pop(shead);
    display(shead);
    shead = pop(shead);
    shead = pop(shead);
    shead = pop(shead);
    display(shead);
    
    /*---------------------DISPLAY OF LINKED LIST------------------*/

    display(head);

    return 0;
}