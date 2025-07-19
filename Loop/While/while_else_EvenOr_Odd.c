#include<stdio.h> 

int main(){
int num, user;

printf("Enter a Number=");
scanf("%d", &user);
num=1;

while(num<=user)
{
num++;

if(num%2==0)
{ 
    printf("Display Even Numbers=%d\n", num);

}//num++;

else
{
printf("Display Odd Numbers=%d\n",num);
}
}
return 0;
}