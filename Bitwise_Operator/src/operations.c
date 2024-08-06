#include"../inc/operations.h"
#include"../inc/macros.h"


int bit_swap(int num, int pos1, int pos2, int n)
{
    int temp = ((num >> pos1)^(num >> pos2))&(mask(n));
    num  = num ^ ((temp << pos1) | (temp << pos2));

    return num;

}