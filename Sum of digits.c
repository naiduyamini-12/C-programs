// Online C compiler to run C program online
#include <stdio.h>
int main()
{
    int n,rem,sum=0;
    printf("Enter the number of digits ");
    scanf("%d",&n);
    while(n>0)
    {
        sum=n%10;
        sum=sum+sum;
        n=n/10;
    }
    printf("The sum is %d",sum);
}
