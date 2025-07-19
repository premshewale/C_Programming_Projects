#include<stdio.h>
int main(){
int a,b,area, peri;
 printf("Enter lenght=");
scanf("%d", &a);
 printf("Enter Breadth=");
scanf("%d", &b);
area=a*b;
peri= 2*(a+b);
printf("Area of rectangle=%d\n", area);
 printf("perimeter of rectangle=%d\n", peri);
if (area>peri){
     printf("Area Is greater\n");

} 
else {
    printf("perimeter if greater\n");
    }

return 0;
}