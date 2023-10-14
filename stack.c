#include <stdio.h>
struct stack
{
    int a[50];
    int top;
} s;
void main()
{
    int n, i, ch, j, x;
    s.top = -1;
    printf("enter capacity of elements:");
    scanf("%d", &n);
    for (i = 0;; i++)
    {
        printf("enter choice\n 1.PUSH 2.POP 3.ISFULL 4.ISEMPTY 5.EXIT");
        scanf("%d", &ch);
        if (ch == 1)
        {
            if (s.top == n - 1)
            {
                printf("stack is full\n");
            }
            else
            {
                s.top = s.top + 1;
                printf("enter element:");
                scanf("%d", &s.a[s.top]);
            }
        }
        else if (ch == 2)
        {
            if (s.top == -1)
            {
                printf("stack is empty\n");
            }
            else
            {
                x = s.a[s.top];
                s.top = s.top - 1;
                printf("%d", x);
            }
        }
        else if (ch == 3)
        {
            if (s.top == n - 1)
            {
                printf("stack is full\n");
            }
            else
            {
                printf("stack is not full\n");
            }
        }
        else if (ch == 4)
        {
            if (s.top == -1)
            {
                printf("stack is empty\n");
            }
            else
            {
                printf("stack is not empty\n");
            }
        }
        else if (ch == 5)
        {

            for (j = 0; j < n; j++)
            {
                printf("%d", s.a[i]);
            }
            break;
        }
        else
        {
            printf("invalid choice\n");
        }
    }
}