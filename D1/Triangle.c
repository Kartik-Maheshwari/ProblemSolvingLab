#include<stdio.h>

int main(){
    int a,b,c;
    printf("Enter the Three sides of the triangle:");
    scanf("%d%d%d",&a,&b,&c);
    if(a==b==c){
        printf("EQ");
    }
    else if(a==b || b==c || c==a){
        printf("ISO");
    }
    else{
        printf("SC");
    }
    return 0;
}