#include<stdio.h>

int main()
{
    int i,sum;
    struct time
    {
        int minute,seconds;
    }t[4];
    for(i=0;i<3;i++)
    {
        printf("Time input (m:s) : ");
        scanf("%d:%d",&t[i].minute,&t[i].seconds);
        sum = (t[i].minute*60)+t[i].seconds+sum;
    }
    printf("Total time elasped : %d second",sum);
    
    return 0;
}