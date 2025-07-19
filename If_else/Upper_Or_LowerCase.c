#include<stdio.h> 
int main(){
char num;
printf("Enter Alphabet=");
scanf("%c", &num);
if (num>=65&&num<=90){
printf("Enter Character is Uppercase\n");
}

if (num>=97&&num<=122) {
printf("Enter Character is Lowercase\n");
}

return 0;

}