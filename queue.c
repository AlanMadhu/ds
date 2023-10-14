#include <stdio.h>
struct queue
{
    int front;
    int rear;
    int a[50];
} q;
void main()
{
    int f, r, ch, i;
    printf("enter total capacity of queue");
    scanf("%d", &r);
    q.front = -1;
    q.rear = -1;

    for (i = 0;; i++)
    {
        printf("enter choice:\n1.Push 2.Pop 3.IsFull 4.IsEmpty 5.exit");
        scanf("%d", &ch);
        if (ch == 1)
        {
            if (q.rear == r - 1)
            {
                printf("queue is full\n");
            }
            else
            {
                q.rear = q.rear + 1;
                printf("enter element:");
                scanf("%d", &q.a[q.rear]);
                continue;
            }
        }
        else if (ch == 2)
        {
            if ((q.front == -1 && q.rear == -1) || (q.front == q.rear))
            {
                printf("queue is empty\n");
            }
            else
            {
                q.front = q.front + 1;
                printf("%d is deleted\n", q.a[q.front]);
                continue;
            }
        }
        else if (ch == 3)
        {
            if (q.front == q.rear + 1)
            {
                printf("queue is full\n");
            }
            else
            {
                printf("queue is not full\n");
            }
        }
        else if (ch == 4)
        {
            if ((q.front == q.rear) || (q.front == -1 && q.rear == -1))
            {
                printf("queue is empty\n");
            }
            else
            {
                printf("queue is not empty\n");
            }
        }
        else if (ch == 5)
        {

            for (i = 0; i < r; i++)
            {
                printf("stack is %d\n", q.a[i]);
            }
            break;
        }
        else
        {
            printf("invalid choice");
        }
    }
}