#include <stdio.h>
#include <math.h>
int main()
{
    int i;
    float dis,disx,disy;
    struct coordinates
    {
        float x,y;
    }c[3];
    for(i=0;i<2;i++)
    {
        printf("x%d:",i+1);
        scanf("%f",&c[i].x);
        printf("y%d:",i+1);
        scanf("%f",&c[i].y);
    }
    disx = powf((c[0].x-c[1].x),2);
    disy = powf((c[0].y-c[1].y),2);
    
    dis = sqrtf(disx+disy);
    printf("Distance between(%.1f,%.1f) and (%.1f,%.1f) is %.3f unit",c[0].x,c[0].y,c[1].x,c[1].y,dis);
    return 0;
}