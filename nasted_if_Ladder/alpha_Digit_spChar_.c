#include<stdio.h> 
int main(){
    
    char any;
printf("Enter any Character=");
scanf("%c", &any);

printf("Value=%c\n", any);

if ((any>=97&&any<=122) || (any>=65&&any<=90)) 
printf("character is Alphabate\n");

else if (any>=48&&any<=57)
 printf("character is Digit\n");

else 
printf("Character is SpCharacter\n");

 return 0;
}