#include<stdio.h>

int main(){
    int N;
    printf("Enter the number:");
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        if(i==0 || i==(N-1)){
            for(int j=0;j<N;j++){
                printf("*");
            }
            printf("\n");
        }
        else{
            for(int j=N-1;j>i;j--){
                printf(" ");
            }
            printf("*\n");
        }
    }
    return 0;
}