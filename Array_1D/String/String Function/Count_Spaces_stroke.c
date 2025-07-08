#include<stdio.h>
 #include<string.h>

int main(){

char name[20]; 
int i,count=0;
printf("Enter Character With Spaces="); 
gets(name); 
for(i=0;i<strlen(name);i++){ 
    if (name[i]==' '){
        count++;
    }
}

printf("Number of Spaces: %d\n", count);

return 0;
}