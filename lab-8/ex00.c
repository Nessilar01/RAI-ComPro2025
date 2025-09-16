#include<stdio.h>
int i;
void call_name(int num)
{
    for(i=0;i<num;i++)
    {
    printf("%d Waikoonnart\n",i+1);
    }
}
int main()
{
    call_name(5);
    return 0;
}