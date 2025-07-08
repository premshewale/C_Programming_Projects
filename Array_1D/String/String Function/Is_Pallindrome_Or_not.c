#include<stdio.h>
 #include<string.h> 
int main()
{

char name[20], cpyname [20]; 
int i,a; printf("Enter Character=");
 gets (name); 
 strcpy(cpyname, name); 
 strrev(name);

a=strcmp(cpyname, name);

if(a==0)

printf("String is pallindrome\n");

else{

printf("Straing is Not pallindrome\n");

}

return 0;
}