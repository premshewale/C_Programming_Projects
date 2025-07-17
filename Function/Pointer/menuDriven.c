#include<stdio.h>
void arithmetic(int, int, int*, int*, int*, int*);
int main()
{
int num1,num2;
int add, sub, mult, div;
printf("Enter Two Numbers="); 
scanf("%d %d", &num1, &num2);
arithmetic (num1, num2, &add, &sub, &mult, &div);
 printf("Addition Of Numbers=%d\n", add);
  printf("Substraction of Numbers-%d\n", sub);
   printf("Multiplication Of Numbers=%d\n",mult);
    printf("Division Of Numbers=%d\n",div);

return 0;

}

void arithematic(int n1, int n2, int *padd, int *psub,int *pmult, int *pdiv)
{
*padd=n1+n2;
*psub=n1-n2;
*pmult=n1*n2; 
*pdiv=n1/n2;
}