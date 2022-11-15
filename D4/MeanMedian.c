#include<stdio.h>
#include"traverse.h"

void meanAndMedian(int array[],int s){
    float sum=0;
    for(int i=0;i<s;i++){
        sum+=array[i];
    }
    printf("The Mean is: %f ",sum/s);
    int t,j;
    for(int i=1;i<=3;i++){
        t=array[i];
        j=i-1;
        while(j>=0 && array[j]>t){
            array[j+1]=array[j];
            j=j-1;
            array[j+1]=t;
        }
    }
    printf("The Median is : %d ",array[2]);


}

int main(){
    int arr[5],n=5;
    // printf("Enter the number of elements:");
    // scanf("%d",&n);
    input(arr,n);
    meanAndMedian(arr,n);
    return 0;
}