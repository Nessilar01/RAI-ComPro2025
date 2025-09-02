#include<stdio.h>

int main()
{
    int i;
    float sum[10];
    char a[3][10]={"u","v"};
    struct vector
    {
        float x,y;
    }v[3];
    for(i=0;i<2;i++)
    {
        printf("%s_x:",a[i]);
        scanf("%f",&v[i].x);
        printf("%s_y:",a[i]);
        scanf("%f",&v[i].y);
    }
    sum[0] = v[0].x + v[1].x;
    sum[1] = v[0].y + v[1].y;
    printf("Resultant vector is equvalence to %.1fi + %.1fj",sum[0],sum[1]);
    return 0;
}