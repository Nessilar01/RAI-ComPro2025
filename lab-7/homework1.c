#include<stdio.h>
int main()
{
    int i,j;
    int A[3][3];
    int *pt_A;
    pt_A =A;
    for(i = 0;i<9;i++)
    {
        *(pt_A+i) = i+1;
    }
    printf("3x3 Array\n");
    for(i = 0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",*(pt_A+(i*3)+j));
        }
        printf("\n");
    }
    return 0;
}