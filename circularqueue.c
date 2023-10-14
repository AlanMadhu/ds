#include <stdio.h>
void main()
{
    int ch, i, front, rear, n, a[50];
    printf("enter capacity of queue:");
    scanf("%d", &n);
    front = -1;
    rear = -1;
    for (i = 0;; i++)
    {
        printf("\n1.ADD 2.DELETE 3.ISEMPTY 4.ISFULL 5.DISPLAY 6.EXIT\nenter choice:");
        scanf("%d", &ch);
        if (ch == 1)
        {
            if (front == (rear + 1) % n)
            {
                printf("cqueue is full");
            }
            else if (front == -1 && rear == -1)
            {
                front = 0;
                rear = 0;
                printf("enter element:");
                scanf("%d", &a[rear]);
            }
            else
            {
                rear = (rear + 1) % n;
                printf("enter element:");
                scanf("%d", &a[rear]);
            }
        }
        else if (ch == 2)
        {
            if (front == -1 && rear == -1)
            {
                printf("cqueue is empty");
            }
            else if (front == rear && rear == n - 1)
            {
                printf("%d is deleted", a[front]);
                front = -1;
                rear = -1;
            }
            else
            {
                printf("%d is deleted", a[front]);
                front = (front + 1) % n;
            }
        }
        else if (ch == 3)
        {
            if (front == -1 && rear == -1)
            {
                printf("cqueue is empty");
            }
            else if (front == rear && rear == n - 1)
            {
                printf("cqueue is empty");
            }
            else
            {
                printf("cqueue is not empty");
            }
        }
        else if (ch == 4)
        {
            if (front == (rear + 1) % n)
            {
                printf("cqueue is full");
            }
            else
            {
                printf("queue is not full");
            }
        }
        else if (ch == 5)
        {
            for (i = 0; i < n; i = (i + 1) % n)
            {
                printf("%d", a[i]);
            }
        }
        else if (ch == 6)
        {
            break;
        }
        else
        {
            printf("invalid choice");
        }
    }
}
