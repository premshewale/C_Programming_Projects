#include<stdio.h>
#include<string.h>
int main()
{
char name[20];
int i,count=0;

printf("Enter Character=");
 gets(name); 
 //scanf("%s", name); 
 //printf("name=%s\n", name);name[i]=='a'||

for(i=0;i<20;i++)
{
if (name[i]=='a'||name[i]=='e'||name[i=='i'||name[i]=='o'||name[i]=='u' && name[i]=='A'||name[i]=='E'||name[i]=='I'||name[i]=='O'||name[i]=='U')
count++;
}
printf("vowel Character are=%c\n",name[i]);
printf("Count =%d", count);
return 0;
}