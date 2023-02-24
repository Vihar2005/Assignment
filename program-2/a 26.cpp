#include <stdio.h>
#include <string.h>
struct employee 
{
    int empno;
    char empname[50];
    char address[100];
    int age;
};

main() 
{
    struct employee emp;

    printf("Enter employee number: ");
    scanf("%d", &emp.empno);

    printf("Enter employee name: ");
    scanf(" %[^\n]", emp.empname);

    printf("Enter employee address: ");
    scanf(" %[^\n]", emp.address);

    printf("Enter employee age: ");
    scanf("%d", &emp.age);


    printf("\nEmployee information:\n");
    
    printf("Employee number: %d\n", emp.empno);
    
    printf("Employee name: %s\n", emp.empname);
    
    printf("Employee address: %s\n", emp.address);
    
    printf("Employee age: %d\n", emp.age);

    return 0;
}

