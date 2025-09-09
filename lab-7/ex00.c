#include<stdio.h>

int main()
{
    int i;
    struct student
    {
        char name[100];
        int age;
    };
    struct student s[11];
    struct student *spt;
    spt = s;
    for(i=0;i<10;i++)
    {
        printf("Student[%d]",i);
        printf("\tname:");
        scanf("%s",spt->name);
        printf("\tage");
        scanf("%d",&spt->age);
        spt++;
    }
    
    
}
