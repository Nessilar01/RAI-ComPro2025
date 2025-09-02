#include<stdio.h>
int main()
{
    int i,posavg,postop;
    float Maxavg,Top;
    char sub[4][100]={"Math","English","Science","History"};
    struct challenge
    {
        char name[100];
        int id;
        float Math,Eng,Sci,His,Avg,scoreavg;
    }p[4];
    for(i=0;i<3;i++)
    {
        printf("Enter name,ID, and 4 grades for student %d:\n",i+1);
        scanf("%s %d %f %f %f %f",p[i].name,&p[i].id,&p[i].Math,&p[i].Eng,&p[i].Sci,&p[i].His);
        printf("\n");
        p[i].Avg = (p[i].Math + p[i].Eng +p[i].Sci + p[i].His)/4.0;

    }
    for ( i = 0; i < 3; i++)
    {
        p[0].scoreavg = p[i].Math + p[0].scoreavg;
        p[1].scoreavg = p[i].Eng + p[1].scoreavg;
        p[2].scoreavg = p[i].Sci + p[2].scoreavg;
        p[3].scoreavg = p[i].His + p[3].scoreavg;
    }
    for ( i = 0; i < 3; i++)
    {
        p[i].scoreavg=p[i].scoreavg/3;
    }
    
    Top  = p[0].scoreavg;
    Maxavg = p[0].Avg;
    printf("Student Averages:\n");
    for (i = 0 ; i  < 3 ; i++)
    {
        printf("%s (ID: %d) : %.2f\n",p[i].name,p[i].id,p[i].Avg);
        if(p[i].Avg>=Maxavg)
        {
            Maxavg = p[i].Avg;
            posavg = i;
        }
        if(p[i].scoreavg>=Top)
        {
            Top = p[i].scoreavg;
            postop = i;
        }
    }
    printf("Top Student: %s with %.2f\n",p[posavg].name,p[posavg].Avg);
    for (i = 0 ; i  < 3 ; i++)
    {
        printf("%s : %.2f\n",sub[i],p[i].scoreavg);
    }
    printf("Top Subject : %s with average %.2f\n",sub[postop],p[postop].scoreavg);
    return 0;
}