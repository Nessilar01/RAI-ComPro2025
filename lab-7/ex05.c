#include<stdio.h>
int main()
{
    int array[] = {3, 1, 2, 4, 5, 6},sum,i,a;
    a = sizeof(array)/sizeof(array[0]);
    int *pt_array;
    pt_array= &array;
    for(i=0;i<a;i++)
    {
        sum+=*pt_array;
        pt_array++;
    }
    printf("The sum of array is : %d",sum);
    return 0;
}