#include<stdio.h>

int main(){
    float hight,rad,vol;
    printf("Enter cone hight : ");
    scanf("%f",&hight);
    printf("Enter cone base radius : ");
    scanf("%f",&rad);
    vol = (3.14*rad*rad*hight)/3;
    if(vol>260){
        printf("Cone volume = %.1f \n",vol);
        printf("This cone is perfect for Supun project\n");
    }
    else{
        printf("Cone volume = %.1f \n",vol);
        printf("This cone is not fit for this project\n");
    }
    return 0;
}