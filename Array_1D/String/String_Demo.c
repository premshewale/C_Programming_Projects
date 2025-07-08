#include<stdio.h>
int main()
{

char name[20], fullname [20];

printf("Enter First Name=");
 scanf("%s", name);     //no need of&
 
  printf("name=%s\n", name); 

printf("Enter Full Name="); 
fflush(stdin);      //avoid enter stroke 
gets (fullname);        //for string scan
 
 printf("full_name=%s\n", fullname); 
 puts (fullname);   //for string prints

return 0;
}
