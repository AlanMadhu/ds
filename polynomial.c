#include <stdio.h>
void main()
{
    int a[50], b[50], c[50], m, n, p, q, r, i;
    p = q = r = 1;
    printf("\nEnter the no of terms of polynomial A :");
    scanf("%d", &m);
    printf("\nEnter the no of terms of polynomial B :");
    scanf("%d", &n);
    a[0] = m;
    b[0] = n;
    for (i = 1; i <= 2 * m; i = i + 2)
    {
        printf("\nEnter the exponents of each term of polynomial A:");
        scanf("%d", &a[i]);
        printf("\nEnter the co-efficients of each term of polynomial A :");
        scanf("%d", &a[i + 1]);
    }
    printf("\nThe polynomial A is: ");
    for (i = 1; i <= 2 * m; i = i + 2)
    {
        printf("%dX^%d ", a[i + 1], a[i]);
    }

    for (i = 1; i <= 2 * n; i = i + 2)
    {
        printf("\nEnter the exponents of each term of polynomial B: ");
        scanf("%d", &b[i]);
        printf("\nEnter the co-efficient of each term of polynomial B: ");
        scanf("%d", &b[i + 1]);
    }
    printf("\nThe polynomial B is: ");
    for (i = 1; i <= 2 * n; i = i + 2)
    {
        printf("%dX^%d  ", b[i + 1], b[i]);
    }
    while (p <= 2 * m && q <= 2 * n)
    {
        if (a[p] == b[q])
        {
            c[r] = a[p];
            c[r + 1] = a[p + 1] + b[q + 1];
            p = p + 2;
            q = q + 2;
            r = r + 2;
        }
        else if (a[p] > b[q])
        {
            c[r] = a[p];
            c[r + 1] = a[p + 1];
            p = p + 2;
            r = r + 2;
        }
        else if (b[q] > a[p])
        {
            c[r] = b[q];
            c[r + 1] = b[q + 1];
            q = q + 2;
            r = r + 2;
        }
    }
    while (p <= 2 * m)
    {
        c[r] = a[p];
        c[r + 1] = a[p + 1];
        p = p + 2;
        r = r + 2;
    }
    while (p <= 2 * n)
    {
        c[r] = b[q];
        c[r + 1] = b[q + 1];
        q = q + 2;
        r = r + 2;
    }
    c[0] = (r - 1) / 2;

    printf("\nThe sum of polynomials A and B is: ");
    for (i = 1; i <= c[0] * 2; i = i + 2)
    {
        printf("%dX^%d ", c[i + 1], c[i]);
    }
    
}