#include <stdio.h>
#include<math.h>
int main() 
{
    int a,b,c,d;
    float r1,r2;
    printf("Enter the values of a,b,c:");
    scanf("%d%d%d",&a,&b,&c);
    d=(b*b)-(4*a*c);
    if(d>0)
    {
        r1=-b+sqrt(d)/(2*a);
        r2=-b-sqrt(d)/(2*a);
        printf("The valus of r1,r2");
        printf("The roots are real & distinct");
    }
    else if(d<0)
    {
        printf("The roots are real & imaginary ");
    }
    else 
    {
        r1=r2=-b/(2*a);
        printf("The roots are real & equal ");
        printf("The values of r1,r2");
        printf("The roots are:");
    }
}
