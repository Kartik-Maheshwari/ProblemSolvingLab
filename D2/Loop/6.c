#include<stdio.h>
int  main(){
    for (int i=1;i<=4;i++){
        for(int j=4-i;j>0;j--){
            printf(" ");
        }
        for(int k=0;k<i;k++){
            printf("%d",k+i);
        }
        for(int l=i-2;l>=0;l--){
            printf("%d",i+l);
        }
        printf("\n");
    }
}