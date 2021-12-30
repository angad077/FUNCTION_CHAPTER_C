#include <stdio.h>
int sum(int n);
int main(){
    int a;
    printf("Enter the value of a\n");
    scanf("%d", &a);
    printf("Your answer is %d\n", sum(a));
    return 0;
}
int sum(int n){
    if(n==1){
        return 1;
    }
    else{
        return n+sum(n-1);
    }

}