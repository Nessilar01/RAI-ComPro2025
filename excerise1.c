#include<stdio.h>

int main(){
    int num1,num2,oper,cal;
    printf("Enter Num1 : ");
    scanf("%d",&num1);
    printf("Enter Num2 : ");
    scanf("%d",&num2);
    printf("Calculator Menu : \n1.+\n2.-\n3.*\n4./\n");
    printf("Choose menu : ");
    scanf("%d",&oper);
    if(oper==1)
    {
        cal = num1+num2;
        printf("Ans : Num1 + Num2 = %d",cal);
    }
    else if (oper==2)
    {
        cal = num1-num2;
        printf("Ans : Num1 - Num2 = %d",cal);
    }
    else if (oper==3)
    {
        cal = num1*num2;
        printf("Ans : Num1 * Num2 = %d",cal);
    }
    else if (oper==4)
    {
        cal = num1/num2;
        printf("Ans : Num1 / Num2 = %d",cal);
    }
    return 0;
}
    

