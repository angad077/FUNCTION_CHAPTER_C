#include <stdio.h>
void sum(int a, int b);
int main()
{
    int x, y;
    printf("Enter any two value of x\n");
    scanf("%d %d", &x, &y);
    sum(x, y);

    return 0;
}
void sum(int a, int b)
{
    int c;
    c = a + b;
    printf("Sum of 2 number is %d", c);
}