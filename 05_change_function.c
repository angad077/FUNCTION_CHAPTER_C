#include <stdio.h>
void change(int b);
int main()
{
int b = 45; 
printf("value of b is %d\n",b);
change(b);
printf("After change the value of b is %d\n",b);
    return 0;
}
void change(int b){
    b = 34;
}