#include<stdio.h>

void gcd1(int a,int b){
    int c;
    c=a>b?b:a;
    while(c>1){
        if(a%c==0 && b%c==0){
            printf("gcd = %d",c);
            return;
        }
        c--;
    }
}
void gcd2(int a,int b){
    int c;
    while(a%b){
        c=a%b;
        a=b;
        b=c;
    }
    printf("\n%d",b);
}

int gcd3(int a,int b){
    if(a==0){
        return b;
    }
    if(b==0){
        return a;
    }
    if(a>b){
        return gcd3(a-b,b);
    }
    return gcd3(a,b-a);
}
int gcd4(int a,int b){
    if(b==0){
        return a;
    }
    return gcd4(b,a%b);
}

int main(){
    int n,m;
    printf("Enter the First Number:");
    scanf("%d",&n);
    printf("\nEnter the second Number:");
    scanf("%d",&m);
    //gcd1(n,m);
    //gcd2(n,m);
    printf("%d",gcd4(n,m));
    return 0;
}