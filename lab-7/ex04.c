#include<stdio.h>
int main()
{
    int array[] = {3, 1, 2, 4, 5, 6},max,i,a;
    a = sizeof(array)/sizeof(array[0]);
    int *pt_array;
    pt_array= &array;
    for(i=0;i<a;i++)
    {
        printf("%d\n",*pt_array);
        pt_array++;
    }
    
    return 0;
}