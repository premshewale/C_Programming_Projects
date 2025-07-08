#include<stdio.h>
int main()
{
char name[20];

int i, index;

printf("Enter Character="); 
//scanf("%s", name);

gets (name); 
for (i=0;i<20;i++)
{
if (name[i]=='\0') 
   index=i;
}
printf("Reverse Character=\n");  
for (i=index; i>=0; i--) 
{
printf("%c", name[i]);
}

return 0;
}