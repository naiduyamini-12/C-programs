#include <stdio.h>
int main()
{
    int a[10], i,n,sum=0,avg;
    printf("enter the size");
    scanf("%d",&n);
    printf("enter the elements ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    avg=sum/n;
    printf("%d",avg);
    return(0);
}
