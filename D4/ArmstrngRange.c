//Armstrong number in the range
#include<stdio.h>
#include<math.h>

int power(int p, int q){
	int a = 1;
	while(q>0){
		a = a *p;
		q--;
	}
	return a;
}
int isArmstrong(int n){
    int sum=0,a,temp=n,count=0,p;
    while(temp>0){
        temp=temp/10;
        count++;
    }
    temp=n;
    while(temp>0){
        int m = temp % 10;
        sum = sum + power(m,count); //Compiler problem in VS Code, so created power function
        temp /=10;
    }
   return (sum==n);
}

int main(){
    int m,n;
    printf("Enter the Lower limit of Range:");
    scanf("%d",&m);
    printf("Enter the Upper limit of Range:");
    scanf("%d",&n);
    for(int j=m;j<=n;j++){
        if(isArmstrong(j)) {
            printf("%d ",j);
        }
    }
    return 0;
}