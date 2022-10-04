int  main(){
    for (int i=1;i<=4;i++){
        for(int j=4-i;j>0;j--){
            printf(" ");
        }
        for(int k=i;k>0;k--){
            printf("%d",k);
        }
        for(int l=2;l<=i;l++){
            printf("%d",l);
        }
        printf("\n");
    }
}