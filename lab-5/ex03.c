#include<stdio.h>
int main()
{
    int marks[6],i,max,sum,j;
    for (i=1;i<=5;i++)
    {
        printf("Enter the marks of student %d : ",i);
        scanf("%d",&marks[i]);
        sum = sum+marks[i];
    }
    max = marks[1];
    for (j=1;j<=5;j++)
    {
        if (marks[j]>max)
        {
            max = marks[j];
        }
    }
    printf("Total Marks : %d\n",sum);
    printf("Highest Marks : %d\n",max);
    return 0;
}