/*
#include <stdio.h>
void main()
{
    int a[50], b[50], i, p, q, r, c[50], t1, t2;
    printf("terms in A:");
    scanf("%d", &t1);
    printf("terms in B:");
    scanf("%d", &t2);
    a[0] = t1;
    b[0] = t2;
    printf("polyA \n");
    for (i = 1; i <= 2 * t1; i = i + 2)
    {
        printf("exponent:");
        scanf("%d", &a[i + 1]);
        printf("coefficient:");
        scanf("%d", &a[i]);
    }
    for (i = 1; i < (2 * t1); i = i + 2)
    {
        printf("%d^%d ", a[i], a[i + 1]);
    }
    printf("\npolyb \n");
    for (i = 1; i <= 2 * t2; i = i + 2)
    {
        printf("exponent:");
        scanf("%d", &b[i + 1]);
        printf("coefficient:");
        scanf("%d", &b[i]);
    }
    for (i = 1; i < (2 * t2); i = i + 2)
    {
        printf("%d^%d ", b[i], b[i + 1]);
    }
    p = 1;
    q = 1;
    r = 0;
    while (p <= 2 * t1 && q <= 2 * t1)
    {
        if (a[p] == b[q])
        {
            c[r] = a[p];
            c[r + 1] = a[p + 1] + b[q + 1];
            r = r + 2;
            p = p + 2;
            q = q + 2;
        }
        else if (a[p] > b[q])
        {
            c[r] = a[p];
            c[r + 1] = a[p + 1];
            r = r + 2;
            p = p + 2;
        }
        else if (a[p] < b[q])
        {
            c[r] = b[q];
            c[r + 1] = b[q + 1];
            r = r + 2;
            q = q + 2;
        }
    }
    while (p <= 2 * t1)
    {
        c[r] = a[p];
        c[r + 1] = a[p + 1];
        r = r + 2;
        p = p + 2;
    }
    while (q <= 2 * t2)
    {
        c[r] = b[q];
        c[r + 1] = b[q + 1];
        r = r + 2;
        q = q + 2;
    }
    c[0] = (r + 1) / 2;
    for (i = 0; i <= r; i++)
    {
        printf("%d", c[i]);
    }
    */
#include <stdio.h>
void main()
{
    int a[50][50], r, c, i, j, b[50][50], count, p;
    printf("enter row1:");
    scanf("%d", &r);
    printf("enter ccolumn1:");
    scanf("%d", &c);
    printf("enter element:");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("elemnt is:");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d", a[i][j]);
            if (a[i][j] != 0)
            {
                count++;
            }
        }
        printf("\n");
    }
    b[0][0] = r;
    b[0][1] = c;
    b[0][2] = count;
    printf("%d", b[0][2]);
    p = 1;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            if (a[i][j] != 0)
            {
                b[p][0] = i;
                b[p][1] = j;
                b[p][2] = a[i][j];
                p++;
            }
        }
    }

    for (i = 0; i <= count; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf(" %d ", b[i][j]);
        }
        printf("\n");
    }
}