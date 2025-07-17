#include<stdio.h>
int addition (int, int); 
int substraction (int, int);
int multiplication (int, int);
int division (int, int);

int main(){
int num1,num2;
printf("Enter Two Numbers For Addition="); 
scanf("%d %d", &num1, &num2);
int a=addition (num1,num2);
printf("Showing Answer From Function=%d\n",a);
 int b=substraction (num1, num2);
printf("Showing Answer From Function=%d\n",b);
 int c=multiplication (num1, num2);
  printf("Showing Answer From Function-%d\n", c);
int d=division (num1, num2); 
printf("Showing Answer From Function=%d\n",d);

return 0;

} int addition (int num1, int num2)

{ int ans;
ans=num1+num2;
printf("Addition of Numbers=%d\n", ans);
return ans;
}

int substraction(int num1, int num2)
{
int ans;
 ans=num1-num2; printf("Substraction of Numbers=%d\n",ans);
return ans;
}

int multiplication(int num1, int num2)
{
int ans;
 ans=num1*num2; printf("multiplication of Numbers=%d\n",ans);
return ans;
}

int division(int num1, int num2)
{
int ans;
 ans=num1/num2; printf("division of Numbers=%d\n",ans);
return ans;
}