#include<stdio.h>
int main()
{
    int num[9],min,max,i;
    for (i=1;i<=8;i++)
    {
        printf("Enter number %d : ",i);
        scanf("%d",&num[i]);
    }
    max = num[0];
    min = num[1];
    for (i=1;i<=8;i++)
    {
        if(num[i]>max)
        {
            max =  num[i];
        }
        else
        {
            min = num[i];
        }
    }
    printf("Smallest number : %d\n",min);
    printf("Largest number : %d\n",max);
    return 0;
}