#include<stdio.h>
#include<string.h>
int main(){

char name[20], cpyname [20]; 
int i,a,A; 
printf("Enter Character="); 
gets(name);

for(i=0;i<20;i++)
{
if (name[i]=='a' ||name[i]=='A'){
     name[i]='A';
}
}
printf("a replaced with A-%s\n",name);

return 0;
}

