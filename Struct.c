#include<stdio.h>

struct Student{
    char Name[20];
    char Branch[5];
    char Section;
    int Year;
};

int main(){
   struct Student S[5];
   for(int i=0;i<5;i++){
        printf("Enter the name of student %d: ",i+1);
        gets(S[i].Name);
        printf("Enter the Branch of student %d: ",i+1);
        gets(S[i].Branch);
        printf("Enter the Section of student %d: ",i+1);
        scanf("%c",&S[i].Section);
        printf("Enter the Year of student %d: ",i+1);
        scanf("%d",&S[i].Year);
        fflush(stdin);
    }

    for(int i=0;i<5;i++){
        printf("\nDetails of student %d: ",i+1);
        printf("\nName: %s ",S[i].Name);
        printf("\nBranch: %s",S[i].Branch);
        printf("\nSection: %c",S[i].Section);
        printf("\nYear: %d",S[i].Year);
        printf("\n");
   }
    return 0;
}