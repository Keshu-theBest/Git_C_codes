#include <stdio.h>
#include <string.h>
#include "../../include/keshu_core.h"

// ============================================
// STRUCTURES vs UNIONS - Comparison
// ============================================

// STRUCTURE - All members independent
struct Config_Struct {
    int timeout;           // 4 bytes
    float threshold;       // 4 bytes
    char mode;             // 1 byte
    // Total: ~9 bytes
};

// UNION - All members shared memory
union Config_Union {
    int timeout;           // 4 bytes
    float threshold;       // 4 bytes
    char mode;             // 1 byte
    // Total: 4 bytes (maximum)
};

// Practical Example: Union for versatile data handler
union DataHandler {
    int integerValue;
    float floatValue;
    char characterValue;
};

// Practical Example: Structure for complete record
struct StudentRecord {
    int rollNumber;
    float gpa;
    char grade;
    char name[50];
};

void printMemoryLayout();
void compareIndependence();
void compareSizeUsage();
void practicalUnionExample();
void practicalStructureExample();

int main() {
    printf("%s╔════════════════════════════════════════════════════════╗\n", YELLOW);
    printf("║  STRUCTURES vs UNIONS - Detailed Comparison          ║\n");
    printf("╚════════════════════════════════════════════════════════╝%s\n\n", RESET);

    // ========== COMPARISON 1: Memory Layout ==========
    printf("%s>>> COMPARISON 1: Memory Layout & Size\n%s", CYAN, RESET);
    printMemoryLayout();
    printf("\n");

    // ========== COMPARISON 2: Independence ==========
    printf("%s>>> COMPARISON 2: Member Independence\n%s", CYAN, RESET);
    compareIndependence();
    printf("\n");

    // ========== COMPARISON 3: Size Usage ==========
    printf("%s>>> COMPARISON 3: Memory Efficiency\n%s", CYAN, RESET);
    compareSizeUsage();
    printf("\n");

    // ========== COMPARISON 4: Practical Union Use Case ==========
    printf("%s>>> COMPARISON 4: Practical Use - Union Example\n%s", CYAN, RESET);
    practicalUnionExample();
    printf("\n");

    // ========== COMPARISON 5: Practical Structure Use Case ==========
    printf("%s>>> COMPARISON 5: Practical Use - Structure Example\n%s", CYAN, RESET);
    practicalStructureExample();
    printf("\n");

    // ========== DECISION MATRIX ==========
    printf("%s╔════════════════════════════════════════════════════════╗\n", YELLOW);
    printf("║              QUICK DECISION MATRIX                   ║\n");
    printf("╚════════════════════════════════════════════════════════╝%s\n\n", RESET);
    
    printf("%s┌─ CHOOSE STRUCTURE WHEN: ────────────────────────────┐%s\n", GREEN, RESET);
    printf("│ ✓ Need ALL data stored simultaneously               │\n");
    printf("│ ✓ Data is tightly related (complete record)        │\n");
    printf("│ ✓ Memory is NOT a primary constraint               │\n");
    printf("│ ✓ Each member should be independent                │\n");
    printf("│ ✓ Examples: Student, Employee, Product records     │\n");
    printf("%s└──────────────────────────────────────────────────────┘%s\n\n", GREEN, RESET);
    
    printf("%s┌─ CHOOSE UNION WHEN: ────────────────────────────────┐%s\n", RED, RESET);
    printf("│ ✓ Only ONE piece of data needed at a time          │\n");
    printf("│ ✓ Memory is CRITICALLY limited                     │\n");
    printf("│ ✓ Different data types need same storage           │\n");
    printf("│ ✓ Hardware-level programming (registers)           │\n");
    printf("│ ✓ Data reinterpretation needed                     │\n");
    printf("│ ✓ Examples: Variant types, hardware registers      │\n");
    printf("%s└──────────────────────────────────────────────────────┘%s\n\n", RED, RESET);

    // ========== FEATURE COMPARISON TABLE ==========
    printf("%s═══════════════════════════════════════════════════════════════════\n", YELLOW);
    printf("                   FEATURE COMPARISON TABLE\n");
    printf("═══════════════════════════════════════════════════════════════════%s\n\n", RESET);
    
    printf("%-25s | %-22s | %-22s\n", "FEATURE", "STRUCTURE", "UNION");
    printf("%-25s | %-22s | %-22s\n", "═════════════════════════", "═════════════════════", "═════════════════════");
    printf("%-25s | %-22s | %-22s\n", "Memory Allocation", "Each member separate", "All members shared");
    printf("%-25s | %-22s | %-22s\n", "Size Calculation", "Sum of all members", "Size of largest member");
    printf("%-25s | %-22s | %-22s\n", "Access Pattern", "All simultaneously", "One at a time");
    printf("%-25s | %-22s | %-22s\n", "Data Independence", "YES (Independent)", "NO (Overlapping)");
    printf("%-25s | %-22s | %-22s\n", "Changing One Member", "Others unaffected", "Others corrupted");
    printf("%-25s | %-22s | %-22s\n", "Primary Use", "Data grouping", "Memory saving");
    printf("%-25s | %-22s | %-22s\n", "Real-World Use", "Database records", "Variant storage");
    printf("\n");

    return 0;
}

void printMemoryLayout() {
    printf("Struct Config_Struct:\n");
    printf("  timeout:    4 bytes\n");
    printf("  threshold:  4 bytes\n");
    printf("  mode:       1 byte\n");
    printf("  Padding:    1 byte\n");
    printf("  %sTotal Size: %zu bytes%s\n\n", GREEN, sizeof(struct Config_Struct), RESET);
    
    printf("Memory Layout (Visual):\n");
    printf("┌──────────────────────────────────────┐\n");
    printf("│ timeout(4) │ threshold(4) │ mode(1) │\n");
    printf("└──────────────────────────────────────┘\n");
    printf("(Each member has its own space)\n\n");
    
    printf("Union Config_Union:\n");
    printf("  timeout:    4 bytes\n");
    printf("  threshold:  4 bytes\n");
    printf("  mode:       1 byte\n");
    printf("  %sTotal Size: %zu bytes (only largest member)%s\n\n", GREEN, sizeof(union Config_Union), RESET);
    
    printf("Memory Layout (Visual):\n");
    printf("┌──────────────────────────┐\n");
    printf("│ timeout / threshold / mo │ (All overlap in 4 bytes)\n");
    printf("└──────────────────────────┘\n");
    printf("(All members share same location)\n");
}

void compareIndependence() {
    struct Config_Struct s;
    union Config_Union u1, u2;
    
    printf("%sSTRUCTURE: All members independent%s\n", GREEN, RESET);
    s.timeout = 30;
    s.threshold = 95.5f;
    s.mode = 'A';
    
    printf("  Set: timeout=30, threshold=95.5, mode='A'\n");
    printf("  timeout:    %d %s✓%s\n", s.timeout, GREEN, RESET);
    printf("  threshold:  %.1f %s✓%s\n", s.threshold, GREEN, RESET);
    printf("  mode:       %c %s✓%s\n", s.mode, GREEN, RESET);
    printf("  All values preserved! Independence: %sYES%s\n\n", GREEN, RESET);
    
    printf("%sUNION: Members overwrite each other%s\n", RED, RESET);
    u1.timeout = 30;
    printf("  After setting timeout=30:  value=%d\n", u1.timeout);
    
    u1.threshold = 95.5f;
    printf("  After setting threshold=95.5: timeout becomes garbage=%d\n", u1.timeout);
    
    u1.mode = 'A';
    printf("  After setting mode='A':  threshold becomes garbage=%.1f\n", u1.threshold);
    printf("  Only the LAST assigned value is valid! Independence: %sNO%s\n", RED, RESET);
}

void compareSizeUsage() {
    struct StudentRecord s;
    union DataHandler u;
    
    printf("Memory Comparison:\n\n");
    
    printf("struct StudentRecord:\n");
    printf("  rollNumber:   %zu bytes\n", sizeof(int));
    printf("  gpa:          %zu bytes\n", sizeof(float));
    printf("  grade:        %zu bytes\n", sizeof(char));
    printf("  name[50]:     50 bytes\n");
    printf("  %sTotal: %zu bytes%s\n\n", CYAN, sizeof(struct StudentRecord), RESET);
    
    printf("union DataHandler:\n");
    printf("  integerValue:    %zu bytes\n", sizeof(int));
    printf("  floatValue:      %zu bytes\n", sizeof(float));
    printf("  characterValue:  %zu bytes\n", sizeof(char));
    printf("  %sTotal: %zu bytes%s\n\n", CYAN, sizeof(union DataHandler), RESET);
    
    printf("Memory Efficiency:\n");
    printf("  Union saves: %zu - %zu = %zu bytes\n", 
           sizeof(struct StudentRecord), sizeof(union DataHandler),
           sizeof(struct StudentRecord) - sizeof(union DataHandler));
    printf("  %sUnion is %.1f%% smaller%s\n", GREEN,
           ((float)(sizeof(struct StudentRecord) - sizeof(union DataHandler)) / 
            sizeof(struct StudentRecord)) * 100, RESET);
}

void practicalUnionExample() {
    printf("%sScenario: Sensor reading that can be int, float, or status code%s\n\n", CYAN, RESET);
    
    union DataHandler sensor1, sensor2, sensor3;
    
    // Sensor 1: Temperature (float)
    sensor1.floatValue = 36.5;
    printf("Sensor 1 (Temperature): %.1f°C\n", sensor1.floatValue);
    printf("Memory Used: %zu bytes\n\n", sizeof(union DataHandler));
    
    // Sensor 2: Pressure (int)
    sensor2.integerValue = 102300;
    printf("Sensor 2 (Pressure): %d Pa\n", sensor2.integerValue);
    printf("Memory Used: %zu bytes\n\n", sizeof(union DataHandler));
    
    // Sensor 3: Status (char)
    sensor3.characterValue = 'O';
    printf("Sensor 3 (Status): %c (OK)\n", sensor3.characterValue);
    printf("Memory Used: %zu bytes\n\n", sizeof(union DataHandler));
    
    printf("%sAdvantage:%s\n", GREEN, RESET);
    printf("✓ Each sensor uses ONLY %zu bytes regardless of data type\n", sizeof(union DataHandler));
    printf("✓ Perfect for embedded systems with limited memory\n");
    printf("✓ Can reinterpret same memory differently per sensor\n");
}

void practicalStructureExample() {
    printf("%sScenario: Complete student record needed simultaneously%s\n\n", CYAN, RESET);
    
    struct StudentRecord students[2];
    
    strcpy(students[0].name, "Alice Johnson");
    students[0].rollNumber = 2024001;
    students[0].gpa = 3.95;
    students[0].grade = 'A';
    
    strcpy(students[1].name, "Bob Smith");
    students[1].rollNumber = 2024002;
    students[1].gpa = 3.45;
    students[1].grade = 'B';
    
    printf("Displaying ALL student information simultaneously:\n\n");
    for (int i = 0; i < 2; i++) {
        printf("Student %d:\n", i+1);
        printf("  Name:  %s\n", students[i].name);
        printf("  Roll:  %d\n", students[i].rollNumber);
        printf("  GPA:   %.2f\n", students[i].gpa);
        printf("  Grade: %c\n", students[i].grade);
        printf("  Memory: %zu bytes\n\n", sizeof(struct StudentRecord));
    }
    
    printf("%sAdvantage:%s\n", GREEN, RESET);
    printf("✓ All fields accessible and valid at the SAME time\n");
    printf("✓ Complete data record for database operations\n");
    printf("✓ Members are independent - changes don't affect others\n");
    printf("✓ Perfect for applications that need complete records\n");
}
