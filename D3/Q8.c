// 1*2*3 + 2*3*4 +3*4*5+ 4*5*6 + . …... .+ n*(n+1)*(n+2).
#include<stdio.h>
int main(){
    int n,sum=0;
    printf("Enter the number of terms:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        sum+=i*(i+1)*(i+2);
    }
    printf("\nThe sum of %d terms is : %d",n,sum);
    return 0;
}