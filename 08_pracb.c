#include <stdio.h>
float tempreature(float celcius);
int main()
{
int celcius, far;
printf("Enter your tempreaature in celcius \n");
scanf("%d",&celcius);
printf("your (celcius) %d tempreature into (farheniet) is %f",celcius,tempreature(celcius));

    return 0;
}
float tempreature(float celcius){
    int far;
    far=((45 * 9/5) + 32 );
    return far;
}