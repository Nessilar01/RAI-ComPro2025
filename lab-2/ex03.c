#include<stdio.h>

int main(){
    char name[20],gender[20],edu[20];
    int age,weight;
    float height;

    printf("Enter your name : ");
    scanf("%s",name);
    printf("Enter your age : ");
    scanf("%d",&age);
    printf("Enter your height : ");
    scanf("%f",&height);
    printf("Enter your weight : ");
    scanf("%d",&weight);
    printf("Enter your gender : ");
    scanf("%s",gender);
    printf("Enter your Edcation Qualification University : ");
    scanf("%s",edu);

    printf("Name: %s    Age: %d     Gender: %s\n",name,age,gender);
    printf("Height: %.1f     Weight: %d\n",height,weight);
    printf("Education: %s\n",edu);

    return 0;

}