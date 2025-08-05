#include<stdio.h>
int main()
{
    int num,value[300],i,j,count;
    printf("Enter number of elements : ");
    scanf("%d",&num);
    printf("Enter %d intergers : ",num);
    for (i=1;i<=num;i++)
    {
        scanf("%d",&value[i]);
    }
    for(i=1;i<=num;i++)
    {
        for(j=1;j<=num;j++)
        {
            if (value[i]==value[j])
            {
                count++;
            }
        }
        printf("Element %d occurs %d times\n",value[i],count);
    
    }


    return 0;
}