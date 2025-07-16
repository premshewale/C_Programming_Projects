#include<stdio.h>
int main()
{
    int num;
    printf("Enter a Number=");
    scanf("%d",&num);
    if(num>=10){
        printf("Yes.. Number is Greater Than 10\n");
    if(num>=15)
        printf("Yes.. Number is Greater Than 15\n");
    
    else
        printf("No.. Number is less than 15\n");
    }
    else{
        printf("No.. Number is not greater Than 10\n");
        if(num<5)
        printf("Number is Less than 5\n");
    }
    return 0;
    

}