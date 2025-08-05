#include<stdio.h>
int main()
{
    int num[11],even,odd,i;
    for (i=1;i<=10;i++)
    {
        printf("Enter values %d : ",i);
        scanf("%d",&num[i]);
        if(num[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("Even number : %d\n",even);
    printf("Odd number : %d\n",odd);
    return 0;
}