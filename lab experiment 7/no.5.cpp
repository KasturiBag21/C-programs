#include <stdio.h>

// Define the structure for employee details
struct Employee {
    char name[50];
    int empId;
    float salary;
};

int main() {
    // Declare a variable of type struct Employee
    struct Employee emp;

    // Input employee details
    printf("Enter employee name: ");
    scanf("%s", emp.name);

    printf("Enter employee ID: ");
    scanf("%d", &emp.empId);

    printf("Enter employee salary: ");
    scanf("%f", &emp.salary);

    // Print employee details
    printf("\nEmployee Details\n");
    printf("Name: %s\n", emp.name);
    printf("Employee ID: %d\n", emp.empId);
    printf("Salary: %.2f\n", emp.salary);
    return 0;
}
