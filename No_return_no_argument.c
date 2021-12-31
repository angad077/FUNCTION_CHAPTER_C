#include <stdio.h>
void printline();

int main()
{
    printline();
    printf("\nMy name is angad\n");
    printline();
    return 0;
}
void printline()
{
    int i;
    for (i = 0; i <= 20; i++)
    {
        printf("*");
    }
}