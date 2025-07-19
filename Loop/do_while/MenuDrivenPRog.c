#include<stdio.h>
int main(){
int num1,num2, choice, ans,i;

do{
printf("Enter 1st Number=");
scanf("%d", &num1);

printf("Enter 2nd Number=");
scanf("%d", &num2);

printf("Enter number= 1-For Addition, 2-For Substraction, 3-For Multiplication,4-For Division=\n");
scanf("%d", &choice);

switch(choice) {
case 1: (ans=num1+num2);
printf("Addition of Numbers=%d\n", ans); 
break;

case 2: (ans=num1-num2);
 printf("Substracrtion of Numbers=%d\n",ans);
break;

case 3: (ans=num1*num2);
printf("Multiplication of Numbers=%d\n", ans);
break;

case 4: (ans=num1/num2);
 printf("Divison of Numbers=%d\n", ans);
break;

default:
printf("Enter A Vaild Data=");
scanf("%d",&i);
}
printf("Do you Want To Continue Press 1\n =");
scanf("%d",&i);
}
while(i==1);

return 0;
}
