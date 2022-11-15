//Program to print strong number <=N
#include<stdio.h>
int fact(int k){
    int f=1;
    for(int i=1;i<=k;i++){
        f=f*i;
    }
    return f;
}
int isStrong(int n){
    int temp=n,a,sum=0;
    while(temp>0){
        a=temp%10;
        sum+=fact(a);
        temp=temp/10;
    }
    return(sum==n) ;

}

int main(){
    int m,n;
    printf("Enter the Lower limit of Range:");
    scanf("%d",&m);
    printf("Enter the Upper limit of Range:");
    scanf("%d",&n);
    for(int j=m;j<=n;j++){
        if(isStrong(j)) {
            printf("%d ",j);
        }
    }
    return 0;
}