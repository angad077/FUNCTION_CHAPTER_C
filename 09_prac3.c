#include <stdio.h>
int fib(int n);
int main()
{
    int a;
    printf("Enter the value of a\n");
    scanf("%d", &a);
    printf("Your answer is %d\n", fib(a));
    return 0;
}
int fib(int n)
{

    if ((n == 1) || n == 2)
    {
        return 1;
    }
    
    else
    {
        return fib(n - 1) + fib(n - 2);
    }
}