#include<stdio.h>

struct Employee {
int empid;
char name[20];
float salary;
int deptid;
};

int main(){

struct Employee emp[3];
int i;
for (i=0;i<3;i++) {
printf("Enter Employee Id :"); 
scanf("%d", &emp[i].empid);

printf("Enter Employee Name:");
fflush(stdin);
gets (emp[i].name);

printf("Enter Employee Salary: ");
scanf("%f",&emp[i].salary);

printf("Enter Employee Department Id:"); 
scanf("%d", &emp[i].deptid);
}

printf("Employee Details are=\n");
for (i=0;i<3;i++){
printf(" Employee Id: %d\n", emp[i].empid);
 printf(" Employee Name:%s\n", emp[i].name); 
 printf(" Employee Salary:%.3f\n", emp[i].salary);
printf(" Employee Department Id: %d\n\n", emp[i].deptid); 
}

return 0;
}