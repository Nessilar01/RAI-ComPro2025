#include<stdio.h>
int main()
{
    struct num
    {
        int a,b,sum;
    }S;
    struct num *pt_s=&S;
    printf("Enter first value : ");
    scanf("%d",&pt_s->a);
    printf("Enter second value : ");
    scanf("%d",&pt_s->b);
    pt_s->sum = pt_s->a+pt_s->b;
    printf("%d + %d = %d",pt_s->a,pt_s->b,pt_s->sum);
    return 0;
}