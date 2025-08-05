#include<stdio.h>
int main()
{
    int original[]={1,2,3,4,5,6,7,8,9},i;
    int size = sizeof(original)/sizeof(original[0]);
    size--;
    printf("Reversed Array : "); 
    for (i=0;i<=size;i++)
    {
        printf("%d ",original[size-i]);
    }
    
    return 0;
}