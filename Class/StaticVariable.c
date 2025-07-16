#include<stdio.h> 
void display();

int main(){

display();
display();
display(); 
return 0;
}

void display(){
static int a=10;

printf("a=%d\n",a);
a++;
printf("a=%d\n",a);
}