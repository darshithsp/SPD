#include<stdio.h>
#include"../inc/macros.h"

int bit_swap(int num, int pos1, int pos2, int n)
{
    int temp = ((num >> pos1)^(num >> pos2))&(mask(n));
    num  = num ^ ((temp << pos1) | (temp << pos2));

    return num;

}

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