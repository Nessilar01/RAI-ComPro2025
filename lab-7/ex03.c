#include<stdio.h>
int main()
{
    int array[] = {3, 1, 2, 4, 5, 6},max,i,a;
    a = sizeof(array)/sizeof(array[0]);
    int *pt_array;
    pt_array= &array;
    max = *pt_array;
    //printf("%d %d",pt_array,*pt_array);
    for(i=0;i<a;i++)
    {
        if(*pt_array>=max)
        {
            max = *pt_array;
        }
        pt_array++;
    }
    printf("Max value : %d\n",max);
    return 0;
}