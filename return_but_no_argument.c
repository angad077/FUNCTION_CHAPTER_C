#include <stdio.h>
int sqrt();
int main()
{
    int a;
    a = sqrt();
    printf("%d", a);

    return 0;
}
int sqrt()
{
    int a, b;
    printf("Enter any number\n");
    scanf("%d", &a);
    b = a * a;
    return (b);
}