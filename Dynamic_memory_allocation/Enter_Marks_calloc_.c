#include<stdio.h>
#include<stdlib.h>
int main(){
int num, *ptrmarks, i; 

printf("How Many Marks You Want To Store:"); 
scanf("%d", &num);

ptrmarks=(int) calloc(num, num *sizeof(int));

printf("Enter %d Marks: num");
for (i=0; i<num; i++) { 
    scanf("%d", ptrmarks+i);
}
printf("Entered Marks Are=\n"); 
for (i=0;i<num; i++) {
printf("%d\n",(ptrmarks+i));
} 
free(ptrmarks);
 return 0;
}