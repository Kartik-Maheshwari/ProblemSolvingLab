#include<stdio.h>

int  main(){
    for (int i=1;i<=4;i++){
        for(int j=4-i;j>0;j--){
            printf(" ");
        }
        for(int k=1;k<=2*i-1;k++){
            printf("*");
        }
        printf("\n");
    }
}