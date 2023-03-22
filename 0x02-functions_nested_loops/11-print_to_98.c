#include <stdio.h>
#include “main.h”

/**
* print_to_98 - print all natural numbers from n to 98,
* followed by a new line
* @n: print from this number
*/
Void print_to_98(int n)

        int i, j;
        
        if (n<= 98)
        {
             for (i=n, i<=98; i++)
             {
                    if(i !=98)
                             print(“%d,”,i);
                    else if (i==98)
                             print(“%d\n”,i);
             }
} else if (n>=98)
{
             for (j=n; j>=98; j–)
             {
                  If (j !=98)
                  print(“%d,”, j);
              else id (j==98)
                  print(“%d\n”, j);
             }
       }
}
