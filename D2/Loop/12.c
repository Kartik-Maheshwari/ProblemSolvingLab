#include<stdio.h>

int main(){
    int n=6,p=1,m=1;
    
    for(int i=1;i<2*n;i++){
        printf("%d",p);
        p=p+m;
        if(p==6){
            m=-1;
        }
    }
    printf("\n");
    for(int i=1;i<n;i++){
        for(int j=1;j<=(n-i);j++){
            printf("%d",j);
        }
        for(int k=(2*i)-1;k>0;k--){
            printf(" ");
        }
        for(int l = n-i ; l>0;l--){
            printf("%d",l);
        }
        printf("\n");
    }
    return 0;
}