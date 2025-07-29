#include<stdio.h>

int main(){
     int num,sum=0,i=1;
    while (i<=10)
    {
        printf("%d.Enter the number : ",i);
        scanf("%d",&num);
        sum = sum+num;
        num = 0;
        i++;
    }
    printf("total sum is %d\n",sum);
    return 0;
}