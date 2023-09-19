#include <stdio.h>
struct Employee 
{
    int empno;
    char empname[50];
    char address[100];
    int age;
};

void printEmployee(struct Employee emp) 
{
    printf("Employee Number: %d\n", emp.empno);
    printf("Employee Name: %s\n", emp.empname);
    printf("Address: %s\n", emp.address);
    printf("Age: %d\n", emp.age);
}

int main() 
{

    struct Employee emp1;

    emp1.empno = 101;
    strcpy(emp1.empname, "Helly");
    strcpy(emp1.address, "Ahmedabad");
    emp1.age = 20;
    printf("Employee details:\n");
    printEmployee(emp1);
    printf("\n");
    
 	struct Employee emp2;
    emp2.empno = 102;
    strcpy(emp2.empname, "Maitri");
    strcpy(emp2.address, "Ahmedabad");
    emp2.age = 22;
    printEmployee(emp2);
    printf("\n");

 struct Employee emp3;
    emp3.empno = 103;
    strcpy(emp3.empname, "Vandit");
    strcpy(emp3.address, "Ahmedabad");
    emp3.age = 23;
    printEmployee(emp3);
    printf("\n");

 struct Employee emp4;
    emp4.empno = 104;
    strcpy(emp4.empname, "Nishi");
    strcpy(emp4.address, "Ahmedabad");
    emp4.age = 20;
    printEmployee(emp4);
    printf("\n");
    
 struct Employee emp5;
    emp5.empno = 105;
    strcpy(emp5.empname, "Rudra");
    strcpy(emp5.address, "Ahmedabad");
    emp5.age = 21;
    printEmployee(emp5);
    printf("\n");

    return 0;
}
