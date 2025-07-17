#include<stdio.h>
int addition (int, int); 
void square (int);
int main(){

printf("Enter 2 Numbers=");
int num1,num2;
 scanf("%d %d", &num1, &num2);
 int add=addition (num1, num2);
 square (add); 
 return 0;

}

int addition (int n1, int n2) {
int ans;
ans=n1+n2;
printf("Addition Of Numbers=%d\n", ans); 
return ans; 
}
void square (int num)
{
int sq; 
sq=num*num;
printf("Square of Number-%d=%d\n", num, sq);
}