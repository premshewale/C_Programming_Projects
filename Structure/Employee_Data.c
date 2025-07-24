#include<stdio.h> 
struct Employee {
int empid;
char name[20];
float salary;
int deptid;
}; 
int main(){
struct Employee emp1, emp2; 
//struct Employee emp2;
 printf("Enter Employee Id :"); //First Employee= 

 scanf("%d", &emp1.empid); 
 printf("Enter Employee Name: "); 
 fflush(stdin);
 gets (emp1.name);
printf("Enter Employee Salary: "); 
scanf("%f",&emp1.salary);
printf("Enter Employee Department Id:");
 scanf("%d", &emp1.deptid);


printf("Employee Details are=\n");
printf(" Employee Id: %d\n", emp1.empid);
 printf(" Employee Name: %s\n", emp1.name); 
 printf(" Employee Salary:%f\n", emp1.salary);
  printf(" Employee Department Id: %d\n", emp1.deptid);

printf("Enter Employee Id :");
scanf("%d", &emp2.empid); printf("Enter Employee Name:");
fflush(stdin);
gets (emp2.name);
printf("Enter Employee Salary: "); 
scanf("%f",&emp2.salary);
printf("Enter Employee Department Id:");
 scanf("%d", &emp2.deptid);


printf("Employee Details are=\n");
printf(" Employee Id: %d\n", emp2.empid);
 printf(" Employee Name: %s\n", emp2.name); 
 printf(" Employee Salary:%f\n", emp2.salary);
  printf(" Employee Department Id: %d\n", emp2.deptid);
  return 0;
}