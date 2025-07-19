#include<stdio.h>
int main() 
{
int num1, ans=0;

printf("Prog For Continues Addition of Numbers \n");

do{

printf("Enter Number="); 
scanf("%d",&num1); 
ans=ans+num1;

printf("Addition all Numbers=%d\n", ans);
}
while (num1!=0);

return 0;

}