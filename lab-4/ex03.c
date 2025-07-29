#include<stdio.h>

int main(){
    int num =0;
    do
    {
        printf("Enter the number : ");
        scanf("%d",&num);
        
        if (num==0)
        {
            printf("Exiting Program... Bye");
        }
        else if(num%2==0)
        {
            printf("%d is even\n",num);
        }
        else
        {
            printf("%d is odd\n",num);
        }
    } 
    while (num!=0);
    
 
    return 0;
}