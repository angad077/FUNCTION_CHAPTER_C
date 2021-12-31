#include <stdio.h>
int sum(int a, int b);
int main()
{
    int a, b, c;
    printf("Enter a value\n");
    scanf("%d", &a);
    printf("Enter b value\n");
    scanf("%d", &b);
    c = sum(a, b);
    printf("Your sum is %d\n", c);
    return 0;
}
int sum(int a, int b)
{
    int c;
    c = a + b;
    return (c);
}