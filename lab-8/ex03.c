#include<stdio.h>
int a,b;
int sum(a,b)
{
    return (a*a)+(b*b);
}
int main()
{
    printf("Enter the two integers : ");
    scanf("%d %d",&a,&b);
    printf("Sum of squares of %d and %d is %d",a,b,sum(a,b));
    return 0;
}