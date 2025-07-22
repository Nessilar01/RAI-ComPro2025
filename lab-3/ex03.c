#include<stdio.h>
int main(){
    int num,check;
    printf("Enter a number : ");
    scanf("%d",&num);
    check = num %2;
    switch (check){
    case 1:
        switch (num)
        {
        case 1 ... 100:
            printf("%d is odd",num);
            break;
        
        default:
            printf("%d is out of range",num);
            break;
        }
        break;
    case 0:
        switch (num)
        {
        case 1 ... 100:
            printf("%d is even",num);
            break;
        
        default:
            printf("%d is out of range",num);
            break;
        }
        break;
    }





    
    return 0;
}