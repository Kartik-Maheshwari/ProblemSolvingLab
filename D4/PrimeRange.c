//Display Prime Numbers Between Intervals Using Function
#include<stdio.h>

int isPrime(int n){
    int i,f=1;
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            f=0;
            break;
        }
    }
    return f;
}
int main(){
    int n,m;
    printf("Enter the Lower limit of Range:");
    scanf("%d",&m);
    printf("Enter the Upper limit of Range:");
    scanf("%d",&n);
    for(int j=m;j<=n;j++){
        if(isPrime(j)){
            printf("%d ",j);
        }
    }
    return 0;
}