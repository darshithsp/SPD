/*-----------------*/
/*-----------------*/
/*-----------------*/
/*-----------------*/


// This Program is to identify weather the machine is having confuguration of Little Endian or Big Endian 
// Just take this program on machine which is to be identified for Endianness, We will get Print statement weather the machine is Little Endian or Big Endian.

/*-----------------*/
/*-----------------*/
/*-----------------*/
/*-----------------*/


#include<stdio.h>

union endian
{
    int a;
    char c;
};

int main()
{
    union endian e1;
    e1.a = 0x01;

    if((int)e1.c == 1)
    {
        printf("This machine is Little Endian machine\n");
    }
    else
    {
        printf("This machine is Big Endian machine\n");
    }

    return 0;
}