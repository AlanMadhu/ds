
#include <stdio.h>
struct complex
{
    int real;
    int img;
} complex;
struct complex add(struct complex, struct complex);
int main()
{
    struct complex n1, n2, n3;
    printf("enter complex no1:\n");
    printf("enter real and imaginary parts:");
    scanf("%d %d", &n1.real, &n1.img);
    printf("enter complex no2:\n");
    printf("enter real and imaginary parts:");
    scanf("%d %d", &n2.real, &n2.img);
    n3 = add(n1, n2);
    printf("%d+%di", n3.real, n3.img);
}

struct complex add(struct complex n1, struct complex n2)
{
    struct complex temp;
    temp.real = n1.real + n2.real;
    temp.img = n1.img + n2.img;
    return (temp);
}