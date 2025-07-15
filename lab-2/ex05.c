#include<stdio.h>
#include<string.h>

int main(){
    char name[100],uni[20],first[50],last[50];
    int age;
    float height;
    printf("Enter your full name : ");
    scanf("%[^\n]",name);
    printf("Enter your age : ");
    scanf("%d",&age);
    printf("Enter your height : ");
    scanf("%f",&height);
    printf("Enter you University name : ");
    scanf("%s",uni);
    sscanf(name,"%s %s",first,last);
    printf("Hi! Everyone. This is %c.%s from %s. I am %d years old and my height is %.1f cm tall\n",last[0],first,uni,age,height);
}