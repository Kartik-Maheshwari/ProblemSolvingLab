#include<stdio.h>

int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            printf("%c ",65+(n-1)-i+j);
        }
        printf("\n");
    }
    return 0;
}