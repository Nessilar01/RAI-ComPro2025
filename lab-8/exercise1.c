#include<stdio.h>
#include<math.h>
float triangle_area(float a,float b,float c)
{
    float s = (a+b+c)/2;
    float area = sqrtf(s*(s-a)*(s-b)*(s-c));
    return area;
}
int main()
{
    printf("triangle area = %.2f sq.unit\n",triangle_area(3,4,5));
    return 0;
}
