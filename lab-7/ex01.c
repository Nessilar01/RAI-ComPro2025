#include<stdio.h>

int main()
{
    int test = 0;
    int *t;
    t = &test;
    printf("The address of test variable is at : %p",t);
    return 0;
}