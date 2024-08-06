/*-----------------*/
/*-----------------*/
/*-----------------*/
/*-----------------*/

// This program is to swap the n-number of bits with 2 different indexes.
// Num Variable takes the input number 
// Pos1 will take the value for 1st Position and Pos2 will take value for 2nd Position.
// 'n' indicated how many bits need to be swapped from mentioned Positions.


/*-----------------*/
/*-----------------*/
/*-----------------*/
/*-----------------*/


#include<stdio.h>
#include"../inc/macros.h"
#include"../inc/operations.h"

int main()
{
    int num, pos1, pos2, n;
    printf("Enter the values of NUM\nNUM >>>>>>>>>>>>>     ");
    scanf("%x",&num);
    printf("Enter the value of Pos1\nPos1 >>>>>>>>>>>>>     "); 
    scanf("%d",&pos1);
    printf("Enter the value of Pos2\nPos2 >>>>>>>>>>>>>     ");
    scanf("%d",&pos2);
    printf("Enter the value of n\nn >>>>>>>>>>>>>      ");
    scanf("%d",&n);

    printf("The value of num before swapping is \t%x\n",num);
    printf("The value of num after swapping is \t%x\n",bit_swap(num,pos1,pos2,n));

    return 0;

}