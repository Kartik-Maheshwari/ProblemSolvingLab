#include <stdio.h>
void main()
{
    int bs, al, ts;
    float hra, da, pf;
    char g;
    printf("Enter the Basic Salary:");
    scanf("%d", &bs);
    fflush(stdin);  //Cleared the Buffer
    printf("Enter the grade (uppercase):");
    scanf("%c", &g);
    hra = (0.2f * bs);  //Converted Double into int
    da = (0.5f * bs);
    pf = (0.11f * bs);
    if (g == 'A')
    {
        al = 1700;
    }
    else if (g == 'B')
    {
        al = 1500;
    }
    else
    {
        al = 1300;
    }
    ts = bs + hra + da + al - pf;
    printf("\nThe Total Salary is:%d", ts);
}