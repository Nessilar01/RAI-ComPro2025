#include<stdio.h>

int main()
{
    int i,pos;
    float max;
    struct student
    {
        char name[100];
        int age;
        float score;
    }s[5];
    for(i=0;i<3;i++)
    {
        printf("Student %d's name:",i+1);
        scanf("%s",s[i].name);
        printf("Student %d's age:",i+1);
        scanf("%d",&s[i].age);
        printf("Student %d's score:",i+1);
        scanf("%f",&s[i].score);
        printf("\n");
    }
    max = s[0].score;
    for(i=0;i<3;i++)
    {
        if(s[i].score>=max)
        {
        max = s[i].score;
        pos=i;
        }
    }
    printf("The highest scores belongs to %s at %.1f scores!",s[pos].name,max);

    return 0;
}