#include<stdio.h>

int check(int n){
    int s=0;
    while(n>0){
        s=s*10 + n%10;
        n=n/10;
    }
    return(s);
}

int main(){
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    if(check(num)==num){
        printf("It is a Palindrome Number.");
    }
    else{
        printf("It is not a Palindrome Number.");
    }
    return 0;
}