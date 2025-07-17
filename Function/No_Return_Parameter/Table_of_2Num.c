#include<stdio.h>
void table(int);
int main(){
int a;
printf("Enter first Number=");
scanf("%d",&a);

table(a);
printf("Enter second Number="); 
scanf("%d", &a);
table(a);

return 0;
}

void table(int a)
{
int table, i;
for (i=1;i<=10; i++)
{
table=a*i;
printf("%d\n", table);
}
}