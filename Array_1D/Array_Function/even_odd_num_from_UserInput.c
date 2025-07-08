#include<stdio.h>
void even (int[]); 
void odd(int[]);

int main(){
int a[10],i;
printf("Enter 10 Numbers="); 
for (i=0;i<10; i++) 
scanf("%d", &a[i]);

int choice;
printf("Want To Dislay Even Numbers Press-1=\n"); 
printf("Want To Dislay Odd Numbers Press-2\n"); 
scanf("%d", &choice);

switch(choice)
{
case 1:even(a);
    break;
case 2:odd(a);
    break;

default:
printf("Enter a Vaild Data");
}
return 0;
}

void even(int a[]) {
int i, count=0;
for(i=0;i<10;i++){
if(a[i]%2==0)
count++;{
printf("Even Number are %d\n",a[i]);}
}
printf("Total Even Numbers=%d",count);
}

void odd(int a[]) {
int i, count=0;
for(i=0;i<10;i++){
if(a[i]%2!=0)
count++;{
printf("Odd Number are %d\n",a[i]);}

}
printf("Total Odd Numbers=%d",count);
}