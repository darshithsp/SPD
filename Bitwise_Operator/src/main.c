#include<stdio.h>
#include"../inc/macros.h"


int main()
{
    int value1, value2, n;
    printf("Enter the value : ");
    scanf("%x",&value1);
    printf("\nEnter the bit value to be set : ");
    scanf("%d",&n);
    printf("%x==>",value1);


    value2 = set_bit(value1,n);
    printf("%x\n",value2);

    return 0;
}