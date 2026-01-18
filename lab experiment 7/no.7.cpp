#include <stdio.h>

// Define the structure for address details
struct Address {
    char city[50];
    char state[50];
    int pinCode;
};

// Define the structure for employee details with nested Address structure

struct Employee {
    char name[50];
    int empId;
    float salary;
    struct Address empAddress;  
	// Nested structure
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

    // Input address details
    printf("Enter city: ");
    scanf("%s", emp.empAddress.city);

    printf("Enter state: ");
    scanf("%s", emp.empAddress.state);

    printf("Enter PIN code: ");
    scanf("%d", &emp.empAddress.pinCode);

    // Print employee details including nested address structure
    printf("\nEmployee Details\n");
    printf("Name: %s\n", emp.name);
    printf("Employee ID: %d\n", emp.empId);
    printf("Salary: %.2f\n", emp.salary);
    printf("Address: %s, %s, PIN: %d\n", emp.empAddress.city, emp.empAddress.state, emp.empAddress.pinCode);
    
    return 0;
}
