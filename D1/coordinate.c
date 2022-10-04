#include<stdio.h>

int main(){
    int a,b;
    printf("Enter the coordinates:");
    scanf("%d%d",&a,&b);
    if(a>0){
        if(b>0){
            printf("First");
        }
        else{
            printf("Fourth");
        }
    }
    else{
        if(b>0){
            printf("Second");
        }
        else{
            printf("Third.");
        }
    }
    return 0;

}