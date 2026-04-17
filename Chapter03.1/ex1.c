#include <stdio.h>

void main() {
    int i;
    for (i = 0; i < 10; i++)
        printf("%d\n", i);

    for (int j = 0; j < 10; j++)
        printf("%d\n", j);

    for (int k = 0; k < 10; k += 2) {
        printf("%d", k);
        printf("\n");

    }
}

/*
    if (n < 10 && m <20)
        for (int i =0; i < n; i++)
            for (int i =0; j < m, j++)
            {
                printf("%d", i + j);
                printf("\n");
            }
*/

/*
int i;
for ( i = 0; i < 10; i++)
    printf("%d\n", i);
int i = 0;
for (; i < 10; i++)
    prinf ("%d\n", i);
    */

/*
int i;
for ( i = 0; i < 10; i++)
    printf("%d\n", i);

for ( i = 0; i < 10;)
{
    prinf ("%d\n", i);
    i++;
}
    */

/*
int i;
for ( i = 0; i < 10; i++)
    printf("%d\n", i);

for ( i = 0; i++)
    printf("%d\n", i);

for ( i =0; ;i++)
{
    ìf ( i >= 10)
           break;
    printf ("%d\n", i);
}
    */

/*
for ( i = 0; i < 10; i++)
{
        ìf ( i % 2 ==0)
              break;
        printf("%d\n", i);
}
for ( i =0; 
    */