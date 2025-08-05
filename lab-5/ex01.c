#include<stdio.h>
int main()
{
    int values[11],i,j;
    for (i=1;i<=10;i++)
    {
        printf("Enter the value %d here : ",i);
        scanf("%d",&values[i]);
    }
    printf("Values in array are:");
    for (j=1;j<=10;j++)
    {
        printf("%d,",values[j]);
    }
    return 0;
}