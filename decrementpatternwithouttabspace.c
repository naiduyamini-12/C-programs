#include <stdio.h>
void main()
{
    int i,j,k;
    for(i=5;i>=1;i--)
    {
        for(j=i;j<=5;j++)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {
            printf("*");
        }
        printf("\n");

        }
    }