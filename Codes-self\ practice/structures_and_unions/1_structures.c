#include <stdio.h>
#include <string.h>
#include "../../include/keshu_core.h"

// ============================================
// STRUCTURES - Comprehensive Examples
// ============================================

// Example 1: Simple Structure
struct Point {
    int x;
    int y;
};

// Example 2: Complex Structure
struct Student {
    char name[50];
    int rollNo;
    float gpa;
    char branch[20];
};

// Example 3: Nested Structure
struct Address {
    char street[50];
    char city[30];
    int pincode;
};

struct Employee {
    char empName[50];
    int empID;
    struct Address empAddress;
    float salary;
};

// Example 4: Array of Structures
struct Product {
    int productID;
    char productName[40];
    float price;
    int quantity;
};

// Function to display a Point
void displayPoint(struct Point p) {
    printf("%sPoint: (%d, %d)%s\n", CYAN, p.x, p.y, RESET);
}

// Function to display Student info
void displayStudent(struct Student s) {
    printf("%s--- Student Info ---%s\n", GREEN, RESET);
    printf("Name: %s\n", s.name);
    printf("Roll No: %d\n", s.rollNo);
    printf("GPA: %.2f\n", s.gpa);
    printf("Branch: %s\n", s.branch);
}

// Function to display Employee info
void displayEmployee(struct Employee e) {
    printf("%s--- Employee Info ---%s\n", GREEN, RESET);
    printf("Name: %s\n", e.empName);
    printf("Employee ID: %d\n", e.empID);
    printf("Address: %s, %s - %d\n", e.empAddress.street, 
           e.empAddress.city, e.empAddress.pincode);
    printf("Salary: $%.2f\n", e.salary);
}

// Function to display Product info
void displayProduct(struct Product p) {
    printf("  ID: %d | Name: %-20s | Price: $%.2f | Qty: %d\n", 
           p.productID, p.productName, p.price, p.quantity);
}

int main() {
    printf("%s========================================\n", YELLOW);
    printf("   STRUCTURES IN C - Comprehensive Guide\n");
    printf("========================================%s\n\n", RESET);

    // ========== EXAMPLE 1: Simple Structure ==========
    printf("%s>>> EXAMPLE 1: Simple Structure (Points)\n%s", CYAN, RESET);
    struct Point p1 = {10, 20};
    struct Point p2 = {5, 15};
    
    displayPoint(p1);
    displayPoint(p2);
    printf("\n");

    // ========== EXAMPLE 2: Complex Structure ==========
    printf("%s>>> EXAMPLE 2: Complex Structure (Students)\n%s", CYAN, RESET);
    struct Student students[2];
    
    // Input Student 1
    strcpy(students[0].name, "Alice Johnson");
    students[0].rollNo = 101;
    students[0].gpa = 3.85;
    strcpy(students[0].branch, "Computer Science");
    
    // Input Student 2
    strcpy(students[1].name, "Bob Smith");
    students[1].rollNo = 102;
    students[1].gpa = 3.92;
    strcpy(students[1].branch, "Electronics");
    
    // Display all students
    for (int i = 0; i < 2; i++) {
        displayStudent(students[i]);
        printf("\n");
    }

    // ========== EXAMPLE 3: Nested Structure ==========
    printf("%s>>> EXAMPLE 3: Nested Structure (Employee with Address)\n%s", CYAN, RESET);
    struct Employee emp;
    
    strcpy(emp.empName, "Charlie Brown");
    emp.empID = 501;
    emp.salary = 75000.50;
    
    strcpy(emp.empAddress.street, "123 Oak Street");
    strcpy(emp.empAddress.city, "New York");
    emp.empAddress.pincode = 10001;
    
    displayEmployee(emp);
    printf("\n");

    // ========== EXAMPLE 4: Array of Structures ==========
    printf("%s>>> EXAMPLE 4: Array of Structures (Inventory)\n%s", CYAN, RESET);
    struct Product inventory[3] = {
        {1001, "Laptop", 999.99, 15},
        {1002, "Mouse", 29.99, 50},
        {1003, "Keyboard", 79.99, 30}
    };
    
    printf("%sInventory List:%s\n", GREEN, RESET);
    for (int i = 0; i < 3; i++) {
        displayProduct(inventory[i]);
    }
    printf("\n");

    // ========== EXAMPLE 5: Memory Size Analysis ==========
    printf("%s>>> EXAMPLE 5: Size of Structures\n%s", CYAN, RESET);
    printf("sizeof(struct Point) = %zu bytes\n", sizeof(struct Point));
    printf("sizeof(struct Student) = %zu bytes\n", sizeof(struct Student));
    printf("sizeof(struct Address) = %zu bytes\n", sizeof(struct Address));
    printf("sizeof(struct Employee) = %zu bytes\n", sizeof(struct Employee));
    printf("sizeof(struct Product) = %zu bytes\n\n", sizeof(struct Product));

    // ========== EXAMPLE 6: Pointer to Structure ==========
    printf("%s>>> EXAMPLE 6: Pointers to Structures\n%s", CYAN, RESET);
    struct Point *ptrPoint = &p1;
    printf("Using pointer -> operator:\n");
    printf("Point coordinates: (%d, %d)\n", ptrPoint->x, ptrPoint->y);
    printf("Point coordinates (dot notation): (%d, %d)\n\n", (*ptrPoint).x, (*ptrPoint).y);

    // ========== EXAMPLE 7: Structure Assignment ==========
    printf("%s>>> EXAMPLE 7: Structure Assignment\n%s", CYAN, RESET);
    struct Point p3 = p1;  // Copy entire structure
    printf("p1: (%d, %d)\n", p1.x, p1.y);
    printf("p3 (copy of p1): (%d, %d)\n", p3.x, p3.y);
    
    // Modify p3
    p3.x = 100;
    printf("After modifying p3.x to 100:\n");
    printf("p1: (%d, %d) - unchanged\n", p1.x, p1.y);
    printf("p3: (%d, %d) - changed\n\n", p3.x, p3.y);

    // ========== EXAMPLE 8: Dynamic Structures ==========
    printf("%s>>> EXAMPLE 8: Dynamic Structure Allocation\n%s", CYAN, RESET);
    struct Student *dynamicStudent = (struct Student *)malloc(sizeof(struct Student));
    
    strcpy(dynamicStudent->name, "Diana Evans");
    dynamicStudent->rollNo = 103;
    dynamicStudent->gpa = 3.78;
    strcpy(dynamicStudent->branch, "Mechanical");
    
    printf("Dynamically allocated student:\n");
    displayStudent(*dynamicStudent);
    
    free(dynamicStudent);
    printf("\n");

    printf("%s========================================\n", YELLOW);
    printf("   Key Points About Structures:\n");
    printf("========================================%s\n", RESET);
    printf("✓ All members have their own memory space\n");
    printf("✓ Total size = sum of all member sizes\n");
    printf("✓ All members can be accessed simultaneously\n");
    printf("✓ Changing one member doesn't affect others\n");
    printf("✓ Use for storing complete records\n\n");

    k_signature();

    return 0;
}
