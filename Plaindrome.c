
#include <stdio.h>
int main()
{
    int n,rem,rev=0,original;
    printf("Enter the number ");
    scanf("%d",&n);
    original=n;
    while(n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(original==rev)
    {
        printf("The number is palindrome ");
    }
    else{
    printf("The number is not palindrome");
    return(0);
    }
}
