#include <stdio.h>
int main()
{
    int a[10],b[10],n,i;

    printf("Enter the size: ");
    scanf("%d", &n);

    printf("Enter the elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        b[i]=a[i];
    }
    for(i=0; i<n; i++)
    {
        printf("%d\n",b[i]);
    }
    return(0);
}
