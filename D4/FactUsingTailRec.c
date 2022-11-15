//Program to find factorial using tail recursion.
#include<stdio.h>
int fact(int n){
    if(n==1){
        return 1;
    }
    return (n*fact(n-1));
}

int main(){
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    printf("The Factorial of the number is %d",fact(num));
    return 0;
}