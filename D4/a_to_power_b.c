#include<stdio.h>

int po(int a,int b){
    if(b==1){
        return a;
    }
    return a*po(a,b-1);
}
int main(){
    int a,b;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);
    printf("A raised to power b is : %d",po(a,b));
    return 0;
}