#include<stdio.h>
void addition(); 
void substraction();
void multiplication(); 
void division();

int main()

{ addition(); 
substraction(); 
multiplication(); 
division(); 
return 0; }

void addition() 
{ int num1, num2, ans; 
printf("Enter Two Numbers For Addition="); 
scanf("%d %d", &num1, &num2);
 ans=num1+num2; 
 printf("Addition Of Numbers=%d\n", ans);
}
 void substraction()
  { int num1, num2, ans;
   printf("Enter Two Numbers For Substaction=");
    scanf("%d %d", &num1, &num2); 
    ans=num1-num2;
     printf("Substraction Of Numbers=%d\n", ans);

}
void multiplication() 
{ int num1, num2, ans;

printf("Enter Two Numbers For multiplication ="); 
scanf("%d %d", &num1, &num2);
 ans=num1*num2;
  printf("multiplication Of Numbers=%d\n", ans);
}

void division()
{ int num1, num2, ans;
 printf("Enter Two Numbers For division="); 
 scanf("%d %d", &num1, &num2); 
 ans=num1/num2;
 printf("division of Numbers=%d\n", ans);
}