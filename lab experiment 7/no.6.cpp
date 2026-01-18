#include <stdio.h>

// Define the structure for student details
struct Student {
    char name[50];
    int rollNumber;
    float marks;
};

int main() {
    // Declare an array of type struct Student
    struct Student students[3];  // Assuming 3 students for simplicity

    // Input details for each student
    for (int i = 0; i < 3; ++i) {
        printf("Enter details for student %d:\n", i + 1);
        
        printf("Name: ");
        scanf("%s", students[i].name);

        printf("Roll Number: ");
        scanf("%d", &students[i].rollNumber);

        printf("Marks: ");
        scanf("%f", &students[i].marks);
        
        printf("\n");
    }

    // Print details for each student
    printf("\nStudent Details\n");
    for (int i = 0; i < 3; ++i) {
        printf("Student %d\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Roll Number: %d\n", students[i].rollNumber);
        printf("Marks: %.2f\n", students[i].marks);
        printf("\n");
    }
    return 0;
}
