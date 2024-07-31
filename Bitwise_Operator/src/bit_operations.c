#include<stdio.h>
#include"../inc/macros.h"


int main()
{
    int value, value2, n;

    printf("\n\n>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n\nPlease select your choice.\nPress 1 for SET BIT\nPress 2 for CLEAR BIT\nPress 3 for TOGGLE BIT\n\n>>>>>>  ");
    scanf("%d",&n);
    switch(n)
    {
        case 1:{
                    printf("\nCongratulations you have seletced SET BIT\n\n");
                    printf("Enter the value : ");
                    scanf("%x",&value);
                    printf("Enter the bit value to be set : ");
                    scanf("%d",&n);
                    printf("After performing operation the value is %x\n\n\n",set_bit(value,n));
                    break;
                }
        case 2:{
                    printf("\nCongratulations you have seletced CLEAR BIT\n\n");
                    printf("Enter the value : ");
                    scanf("%x",&value);
                    printf("Enter the bit value to be set : ");
                    scanf("%d",&n);
                    printf("After performing operation the value is %x\n\n\n",clear_bit(value,n));
                    break;
                }
        case 3:{
                    printf("\nCongratulations you have seletced TOGGLE BIT\n\n");
                    printf("Enter the value : ");
                    scanf("%x",&value);
                    printf("Enter the bit value to be set : ");
                    scanf("%d",&n);
                    printf("After performing operation the value is %x\n\n\n",toggle_bit(value,n));
                    break;
                }
        default:{
                    printf("You have not selected proper option\n");
                    break;
                }
    }

    return 0;
}