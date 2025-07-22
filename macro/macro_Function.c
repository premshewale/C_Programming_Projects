#include<stdio.h>
#define SQUARE(n) (n)*(n) 
int main()
{
int num, sq;

printf("Enter A Number=");
scanf("%d", &num);

sq=SQUARE(num);

printf("Square of %d %d\n", num, sq); 

return 0;
}