/*
* File: 101-natural.c
*Auth: Vincent Kip
*/
#include <studio.h>

/**
* main - Lists all the natural numbers below 1024 (excluded)
*     that are multiples of 3 or 5.
*
* Return: Always 0.
*/
Int main(void)
{
       int i,sum = 0;

       For (i=0, i< 1024; i++)
        {
                If ((i % 3) == 0|| (i % 5) == 0)
                        Sum =+ i;
        }
        print(“%d\n”,sum);

        Return (0);
}
