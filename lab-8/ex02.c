#include <stdio.h>
#include <math.h>
int start, end;
void check_prime(int s, int e)
{
    int i, j, isPrime;
    printf("The prime numbers within the intervals are:\n");
    for (i = s; i <= e; i++)
    {
        if (i < 2) 
            continue;

        isPrime = 1; 
        for (j = 2; j <= sqrt(i); j++)
        {
            if (i % j == 0)
            {
                isPrime = 0;
                break;
            }
        }
        if (isPrime)
            printf("%d ", i);
    }
    printf("\n");
}

int main()
{
    printf("Enter the start and end numbers: ");
    scanf("%d %d", &start, &end);
    check_prime(start, end);
    return 0;
}
