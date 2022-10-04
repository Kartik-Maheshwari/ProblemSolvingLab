#include<stdio.h>
int main(){
    int p=1,m=1,l;
    for(int i=0;i<6;i++){
        p=p+m;
        for(int j=1;j<=p;j++){
            printf(" ");
        }
        l=i;
        for(int k=1;k<=(2*l)-1;k++){
            printf("*");
        }
        if(i<3){
            m--;
        }
        else{
            m++;
        }
        printf("\n");
    }
    return 0;
}