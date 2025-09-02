#include<stdio.h>

int main()
{
    int i;
    struct people
    {
        int age;
        char name[20];
    } p[10];
    for(i=0;i<10;i++)
    {
        printf("Student[%d]\n",i);
        printf("\tname:");
        scanf("%s",p[i].name);
        printf("\tage:");
        scanf("%d",&p[i].age);
    }
    for (i = 0; i <10; i++)
    {
        if (p[i].age>20)
        {
            printf("\n%s,%d",p[i].name,p[i].age);
        }
    }
    return 0;
}