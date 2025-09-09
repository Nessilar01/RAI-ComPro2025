#include<stdio.h>

int main()
{
    int i,j,temp;
    int num[10];
    int *pt_num;
    pt_num = num;
    printf("Enter 5 integers :");
    scanf("%d %d %d %d %d",pt_num,(pt_num+1),(pt_num+2),(pt_num+3),(pt_num+4));
    for (i = 0; i < 5; i++) 
    {
        for (j = 0; j < 5; j++) 
        {
            if (*(pt_num + i) < *(pt_num + j)) 
            {
                temp = *(pt_num + i);
                *(pt_num + i) = *(pt_num + j);
                *(pt_num + j) = temp;
            }
        }
    }   
    printf("Sorted: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", *(pt_num + i));
    }
    
    return 0;
}