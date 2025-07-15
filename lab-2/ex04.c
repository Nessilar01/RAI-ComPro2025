#include<stdio.h>

int main(){
    char name[20];
    int id;
    float pro,phy,cal,gpa;
    printf("Enter your Name : ");
    scanf("%s",name);
    printf("Enter your student ID : ");
    scanf("%d",&id);
    printf("Enter your Programming score : ");
    scanf("%f",&pro);
    printf("Enter your Physics score : ");
    scanf("%f",&phy);
    printf("Enter your Calculus score : ");
    scanf("%f",&cal);
    gpa = (pro+phy+cal)/3;
    printf("Hi %s (%d)! Your GPA is %.2f\n",name,id,gpa);

    return 0;
}