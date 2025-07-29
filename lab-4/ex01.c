#include<stdio.h>

int main(){
    float num,sum=0,i;
    float avg;
    for(i=1;i<=10;i++)
    {
        printf("%.0f.Enter the number : ",i);
        scanf("%f",&num);
        sum = sum+num;
        avg = sum/i;
    }
    
    printf("total sum is %.0f\n",sum);
    printf("Average is %.2f\n",avg);


    return 0;
}