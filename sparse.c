#include <stdio.h>
void main()
{
    int a[10][10], b[10][10], i, j, a1[10][10], b1[10][10], ch, r, c, counta = 0, countb = 0;
    printf("choose: \n1.Addition 2.Transpose");
    scanf("%d", &ch);
    printf("enter no of rows in matrix : ");
    scanf("%d", &r);
    printf("enter no of columns in matrix : ");
    scanf("%d", &c);

    if (ch == 1)
    {

        for (i = 0; i < r; i++)
        {
            for (j = 0; j < c; j++)
            {
                printf("enter elements of A:");
                scanf("%d", &a[i][j]);
            }
        }
        for (i = 0; i < r; i++)
        {
            for (j = 0; j < c; j++)
            {
                printf("enter elements of B:");
                scanf("%d", &b[i][j]);
            }
        }
        for (i = 0; i < r; i++)
        {
            for (j = 0; j < c; j++)
            {
                if (a[i][j] != 0)
                {
                    counta++;
                }
                if (a[i][j] != 0)
                {
                    countb++;
                }
            }
        }
        a1[0][0] = r;
        a1[0][1] = c;
        a1[0][2] = counta;
        b1[0][0] = r;
        b1[0][1] = c;
        b1[0][2] = countb;
        int d = 1;
        for (i = 0; i < r; i++)
        {
            for (j = 0; j < c; j++)
            {
                if (a[i][j] != 0)
                {
                    a1[d][0] = i;
                    a1[d][1] = j;
                    a1[d][2] = a[i][j];
                    d++;
                }
            }
        }
        d = 1;
        for (i = 0; i < r; i++)
        {
            for (j = 0; j < c; j++)
            {
                if (b[i][j])
                {
                    b1[d][0] = i;
                    b1[d][1] = j;
                    b1[d][2] = b[i][j];
                    d++;
                }
            }
        }
        for (i = 0; i <= counta; i++)
        {
            for (j = 0; j < 3; j++)
            {
                printf("%d", a1[i][j]);
                printf("\t");
            }
            printf("\n");
        }
        for (i = 0; i <= countb; i++)
        {
            for (j = 0; j < 3; j++)
            {
                printf("%d", b1[i][j]);
                printf("\t");
            }
            printf("\n");
        }
        int m = 1, n = 1, k = 1, c[10][10];
        c[0][0] = a1[0][0];
        c[0][1] = a1[0][1];
        for (i = 1; j = 1;)
            if (a1[m][0] == b1[n][0] && a1[m][1] == b1[n][1])
            {
                c[k][0] = a1[m][0];
                c[k][1] = a1[m][1];
                c[k][2] = a1[m][2] + b1[n][2];
            }
    }
}