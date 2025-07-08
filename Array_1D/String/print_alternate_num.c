#include<stdio.h>
int main(){
char name[20];
int i;

printf("Enter Character=");

gets (name); 

//scanf("%s", name);
//printf("name=%s\n", name);

printf("Alternate Character="); 
for (i=0;i<20;i=i+2)
{
printf("%c", name[i]);
{
if(name[i]=='\0')
break; }
}

return 0;
}