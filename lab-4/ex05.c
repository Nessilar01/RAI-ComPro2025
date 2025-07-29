#include<stdio.h>

int main(){
    int num = 0,i,ans=1,mun=0;
    printf("Enter a number : ");
    scanf("%d",&num);
    mun = num;
    for(i = 1;i<=num;i++)
    {
        ans = ans*mun;
        mun = mun-1;
        //printf("num = %d i = %d ans = %d mun = %d\n",num,i,ans,mun);
    }
    printf("Factorial of %d is %d",num,ans);
    return 0;
}