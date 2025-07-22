#include<stdio.h>
#define CUBE(n) (n)*(n)*(n) 
int main()
{

int num, cb;

printf("Enter A Number=");
scanf("%d", &num);

cb=CUBE (num);

printf("cube of %d %d\n", num, cb);

return 0;
}