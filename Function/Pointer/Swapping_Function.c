#include<stdio.h>
void swap(int*, int*);
int main(){

int num1,num2;
printf("Enter Two Numbers"); scanf("%d %d", &num1, &num2);
printf("Before swap num1=%d\t num2=%d\n", num1, num2);
swap (&num1, &num2);
printf("After Swap Num1=%d\t num2=%d\n", num1, num2);
return 0;

}

void swap (int *n1, int *n2){

int temp;
temp=*n1;

*n1=*n2;

*n2=temp;

printf("After Swap Num1=%d\t num2=%d\n", *n1, *n2);
}