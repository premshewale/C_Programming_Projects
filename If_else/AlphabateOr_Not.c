#include<stdio.h>
#include<conio.h>
int main(){
char num;
printf("Enter Alphabet=");
 scanf("%c", &num);

if((num>=97&&num<=122)||(num>=65&&num<=90))
{
 printf("Enter Character is Alphabate\n");
}
else {
printf("Is not a Alphabate\n");
}
_getch;
return 0;
}