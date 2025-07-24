#include<stdio.h> 
struct Department {
int deptid;
char depname [20];
 char location [30];
}; 
int main(){
struct Department emp[3];
int i;
for (i=0; i<3;i++){
printf("Enter Department Id :"); 
scanf("%d", &emp[i].deptid);
fflush(stdin);
printf("Enter Department Name:"); 
fflush(stdin);
gets (emp[i].depname);
printf("Enter Department Location:"); 
scanf("%s", &emp[i].location);
}

printf("Department Details are=\n");

for(i=0; i<3;i++) { 

printf(" Department Id: %d\n", emp[i].deptid);
printf(" Department Name: %s\n", emp[i].depname);
printf(" Department Location:%s\n", emp[i].location);
}

return 0;
}