#include<stdio.h>
int main(){
int age;
printf("Enter Age=");
scanf("%d", &age);

if(age>=18) {
printf("Eligible for Voting");
}

else{
printf("Not Eligible For Voating");
}

return 0;

}