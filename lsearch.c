#include <stdio.h>
void main()
{
    int a[5], n, s, i, *p;
    printf("enter no of elements:");
    scanf("%d", &n);
    printf("enter elements:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    p = &a;
    printf("enter no to be searched");
    scanf("%d", &s);
    for (i = 0; i < n; i++)
    {
        if (s == *(p + i))
        {
            printf("%d is element %d of array", s, i + 1);
            break;
        }
        else
        {
            continue;
        }
    }
}