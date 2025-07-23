#include<stdio.h>
int main(){

int phy, chem, bio, maths, com, per;
 printf("Enter Physics Marks=");
scanf("%d", &phy); 

printf("Enter chemistry Marks=");
scanf("%d", &chem); 

printf("Enter Biology Marks=");
scanf("%d", &bio);

printf("Enter Mathematics Marks="); 
scanf("%d", &maths); 

printf("Enter Computer Marks=");
scanf("%d", &com);

per=(phy+chem+bio+maths+com)/5;
 printf("Percentage=%d\n",per);

if (per>=90) 
printf("grade A\n");

else if (per>=80)
printf("grade B\n");

else if (per>=70)
 printf("grade C\n");

else if (per>=60)
 printf("grade D\n");

else if (per>=40) 
printf("grade E\n");

else
printf("grade Fin");

return 0;
}