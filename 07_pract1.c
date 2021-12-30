#include <stdio.h>
float average(a, b, c);
int main()
{
    int a, b, c;
    printf("Enter the value of a \n");
    scanf("%d", &a);
    printf("Enter the value of b \n");
    scanf("%d", &b);
    printf("Enter the value of c \n");
    scanf("%d", &c);
    printf("Your average is %f\n", average(a, b, c));

    return 0;
}
float average(a, b, c)
{
    float result;
    result = (float)(a + b + c) / 3;
    return result;
}