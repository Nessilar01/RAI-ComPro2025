#include<stdio.h>
#define PI 3.14
float r;
float area(float r)
{
    return PI*r*r;
}
float circumference(float r)
{
    return 2*PI*r;
}
int main()
{
    printf("Enter the radius of circle in cm: ");
    scanf("%f",&r);
    printf("Circumference : %.2f\n",circumference(r));
    printf("Area : %.2f\n",area(r));
    return 0;
}