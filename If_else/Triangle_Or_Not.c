#include<stdio.h>
int main(){
int angle1, angle2, angle3, total; 

printf("Enter Angle1=");
scanf("%d\n", &angle1);

printf("Enter Angle2=");
scanf("%d\n", &angle2);

printf("Enter Angle3=");
scanf("%d\n", &angle3);

total=angle1+angle2+angle3;

if (total==180) {
printf("It is a Triangle\n");
}

else {
printf("It is noat atriangle\n");
}
return 0;
}