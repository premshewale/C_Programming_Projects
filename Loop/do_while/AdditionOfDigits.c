#include<stdio.h>
#include<conio.h>
int main()
{
int num=0, rem=0, add=0;

printf("Enter number=");

scanf("%d", &num);

while (num>0)
{

rem=num%10;
 num=num/10;
 add=add+rem;
}
//fflush(stdin);
printf("addition of digit=%d\n", add); 
_getch;
return 0;

}