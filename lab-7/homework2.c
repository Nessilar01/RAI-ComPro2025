#include<stdio.h>

int main()
{
    float a = 1.23,b=4.56;
    float *apt,*bpt;
    apt = &a;
    bpt = &b;
    printf("Before reverse a = %.2f , b = %.2f\n",a,b);
    float af;
    af = *bpt;
    *bpt=*apt;
    //printf("%d %d %d %d\n",a,b,*apt,*bpt);
    *apt = af;
    printf("After reverse a = %.2f , b = %.2f\n",a,b);
    return 0;
}