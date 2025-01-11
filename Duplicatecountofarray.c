#include <stdio.h>
int main()
{
    int a[10], n, count = 0, i, j;

    printf("Enter the size: ");
    scanf("%d", &n);

    printf("Enter the elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }


    for (i = 0; i < n; ++i)
    {
        for (j = i + 1; j < n; ++j)
        {
            if(a[i]==a[j])
            {
            count++;
            break;
        }
    }
    }
    printf("count of valid pairs:%d\n",count);
    return (0);
    
}
