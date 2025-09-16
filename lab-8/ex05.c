#include <stdio.h>

int N[100];
int i, num;

void sum(int arr[], int n, int *sumodd, int *sumeven)
{
    *sumodd = 0;
    *sumeven = 0;
    for (i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            *sumeven += arr[i];
        }
        else
        {
            *sumodd += arr[i];
        }
    }
}

int main()
{
    int sumodd, sumeven;

    printf("N : ");
    scanf("%d", &num);

    for (i = 0; i < num; i++)
    {
        printf("Input: ");
        scanf("%d", &N[i]);
    }

    sum(N, num, &sumodd, &sumeven);

    printf("Output : Sum of even numbers : %d\n", sumeven);
    printf("         Sum of odd numbers  : %d\n", sumodd);

    return 0;
}
