#include<stdio.h>

int main(){
    int num = 0,i,mun;
    printf("Enter a number : ");
    scanf("%d",&num);
    printf("Multiplication Table for %d\n",num);
    for (i=1;i<=12;i++)
    {
        mun = num*i;
        printf("%d x %d = %d\n",num,i,mun);
    }
    return 0;
}