#include<stdio.h>
int main()
{
    char i;
    printf("Enter Alphabate=");
    scanf("%c",&i);
    if(i>=65 && i<=90){
        printf("Entered Alphabate is Uppercase");
    }
    if(i>=97 && i<=122)
    {
        printf("Entered Alphabate is Lower case");

    }
    return 0;
    

}