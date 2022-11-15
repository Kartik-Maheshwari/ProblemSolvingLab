#include<stdio.h>

int check(int n){
    int a,s=0,temp=n;
    while(n>0){
        a=n%10;
        s=s*10+a;
        n=n/10;
    }
    return(temp==s);
}

int main(){
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    if(check(num)){
        printf("It is a Palindrome Number.");
    }
    else{
        printf("It is not a Palindrome Number.");
    }
    return 0;
}