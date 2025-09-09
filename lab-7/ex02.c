#include<stdio.h>

int main()
{
    int a = 0,b=5;
    int *apt,*bpt;
    apt = &a;
    bpt = &b;
    printf("Before reverse a = %d , b = %d\n",a,b);
    int af;
    af = *bpt;
    *bpt=*apt;
    //printf("%d %d %d %d\n",a,b,*apt,*bpt);
    *apt = af;
    printf("After reverse a = %d , b = %d\n",a,b);
    return 0;
}