//Program to print all perfect numbers in given range using the function.
#include<stdio.h>

void range(int l,int u){
    int sum,i;
    for(i=l;i<=u;i++){
        sum=0;
        for(int j=1;j<=(i/2);j++){
            if(i%j==0){
                sum=sum+j;
            }
        }
        if(i==sum){
        printf("%d\n",i);
        }
    }
}

int main(){
    int n,m;
    printf("Enter the Lower limit of Range:");
    scanf("%d",&m);
    printf("Enter the Upper limit of Range:");
    scanf("%d",&n);
    range(m,n);
    return 0;
}