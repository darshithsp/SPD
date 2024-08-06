#include<stdio.h>
#include<stdlib.h>
#include"../inc/opertions.h"

void largest(int *arr)
{
    int len = sizeof(arr)-1;
    int largest = arr[0], second = arr[0];
    for(int i =1;i<len;i++)
    {
        if(largest < arr[i])
        {
            second = largest;
            largest = arr[i];
        }
    }
    for(int i =0;i<len;i++)
    printf("Element %d is %d\n",i,arr[i]);
    printf("\nThe Largest number is %d\nThe Second Largest number is %d\n\n",largest,second);
}

void smallest(int *arr)
{
    int len = sizeof(arr)-1;
    int smallest = arr[0], second = arr[0];
    for(int i =1;i<len;i++)
    {
        if(smallest > arr[i])
        {
            second = smallest;
            smallest = arr[i];
        }
    }
    for(int i =0;i<len;i++)
    printf("Element %d is %d\n",i,arr[i]);
    printf("\nThe smallest number is %d\nThe Second smallest number is %d\n\n",smallest,second);
}