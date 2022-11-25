#include<stdio.h>

int main(){
    int a,b;
    printf("Enter First Number:");
    scanf("%d",a);
    printf("Enter Second Number:");
    scanf("%d",b);
    int g = a>=b ? a : b;
    int h = a>=b ? b : a;
    if(g%h==0){
        printf("The LCM is : %d",g);
    }
    else{
        printf("The LCM is : %d",g*h);
    }
    return 0;
}