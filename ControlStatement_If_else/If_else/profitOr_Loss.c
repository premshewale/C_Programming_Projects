#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter cost Price=");
    scanf("%d",&num1);
    printf("Enter Selling price=");
    scanf("%d",&num2);
    if(num2>num1){
        printf("User is in Profit ");
    }
    else{
        printf("User is in loss");
    
    }
    return 0;
    
}