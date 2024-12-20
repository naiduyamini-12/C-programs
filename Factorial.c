#include <stdio.h>

int main() {
    long n,i,fact=1;
    printf("Enter the numbers ");
    scanf("%ld",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("The factorial of number is %ld",fact);
    return(0);
}
