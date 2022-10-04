#include<stdio.h>

int main(){
    int N;
    printf("Enter the number:");
    scanf("%d",&N);
    int i=-5, temp=N;
    LABEL:
        printf("%d ",temp);
        temp=temp+i;
        if(temp<=0){
            i=5;
        }
        if(temp<=N){
            goto LABEL;
        }
    return 0;
}