#include “main.h”

/**
* times_table - prints the 9 times table, starting with 0
*/
Void times_table(void)
{
        Int i, j, k;
        
        for (i=0, i<10; i++)
        {
                for (j=0, j<10; j++_
                {
                       k=j*i;
                       if (j==0)
                       {
                               _putchar(k + ‘0’);
                       }

                       if (k<10&& j != 0)
                       {
                              _putchar(‘,’);
                              _putchar(‘ ’);
                              _ptuchar(‘ ’);
                              _putchar(k + ‘0’);
                       } ELSE IF (K>= 10)
                       {
                              _putchar(‘,’);
                              _putchar(‘ ’);
                              _putchar((k/ 10) + ‘0’);
                              _putchar((k % 10) + ‘0’);
                       }
                  }
                  _putchar(‘\n’);
         }
}   
