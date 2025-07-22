#include<stdio.h>
#include<string.h>

int main(){
    char name[50],grade[10];
    float cal,phy,sci;
    float avg;
    printf("Enter your name : ");
    scanf("%s",name);
    printf("Enter your Calculus score : ");
    scanf("%f",&cal);
    printf("Enter your Physic score : ");
    scanf("%f",&phy);
    printf("Enter your Science score : ");
    scanf("%f",&sci);
    avg = (cal+phy+sci)/3;
    if(avg>=80){
        strcpy(grade,"A");
    }
    else if(avg>=70&&avg<80){
        strcpy(grade,"B");
    }
    else if(avg>=60&&avg<70){
        strcpy(grade,"C");
    }
    else if(avg>=50&&avg<60){
        strcpy(grade,"D");
    }
    else if(avg<50){
        strcpy(grade,"F");
    }
    printf("%s, your average is %.2f. You got grade %s",name,avg,grade);
    return 0;
}