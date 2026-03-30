#include <stdio.h>
#include <string.h>
#include "../../include/keshu_core.h"

// ============================================
// UNIONS - Comprehensive Examples
// ============================================

// Example 1: Simple Union
union SimpleData {
    int intValue;
    float floatValue;
    char charValue;
};

// Example 2: Color Representation (Hardware Use Case)
union Color {
    int rgbValue;           // Complete color as one integer
    struct {
        unsigned char red;
        unsigned char green;
        unsigned char blue;
        unsigned char alpha;
    } components;
};

// Example 3: Variant Data (polymorphism in C)
union Variant {
    int intVar;
    float floatVar;
    char charVar;
    char stringVar[50];
};

// Example 4: Complex Data Reinterpretation
union DataReinterpret {
    int intValue;
    char bytes[4];
    struct {
        unsigned char bit0 : 1;
        unsigned char bit1 : 1;
        unsigned char bit2 : 1;
        unsigned char bit3 : 1;
        unsigned char bit4 : 1;
        unsigned char bit5 : 1;
        unsigned char bit6 : 1;
        unsigned char bit7 : 1;
    } bits;
};

void displaySimpleUnion();
void displayColorUnion();
void displayVariantUnion();
void displayDataReinterpret();
void demonstrateMemoryOverlap();

int main() {
    printf("%s========================================\n", YELLOW);
    printf("   UNIONS IN C - Comprehensive Guide\n");
    printf("========================================%s\n\n", RESET);

    // ========== EXAMPLE 1: Simple Union Basics ==========
    printf("%s>>> EXAMPLE 1: Simple Union Basics\n%s", CYAN, RESET);
    displaySimpleUnion();
    printf("\n");

    // ========== EXAMPLE 2: Color Union (Hardware Example) ==========
    printf("%s>>> EXAMPLE 2: Color Representation Union\n%s", CYAN, RESET);
    displayColorUnion();
    printf("\n");

    // ========== EXAMPLE 3: Variant Data Type ==========
    printf("%s>>> EXAMPLE 3: Variant Data Type (Polymorphism)\n%s", CYAN, RESET);
    displayVariantUnion();
    printf("\n");

    // ========== EXAMPLE 4: Data Reinterpretation ==========
    printf("%s>>> EXAMPLE 4: Data Reinterpretation\n%s", CYAN, RESET);
    displayDataReinterpret();
    printf("\n");

    // ========== EXAMPLE 5: Memory Overlap Demonstration ==========
    printf("%s>>> EXAMPLE 5: Demonstrating Memory Overlap\n%s", CYAN, RESET);
    demonstrateMemoryOverlap();
    printf("\n");

    // ========== EXAMPLE 6: Union Size Analysis ==========
    printf("%s>>> EXAMPLE 6: Size of Unions\n%s", CYAN, RESET);
    printf("sizeof(union SimpleData) = %zu bytes ", sizeof(union SimpleData));
    printf("(max of: int=%zu, float=%zu, char=%zu)\n", 
           sizeof(int), sizeof(float), sizeof(char));
    printf("sizeof(union Color) = %zu bytes\n", sizeof(union Color));
    printf("sizeof(union Variant) = %zu bytes\n", sizeof(union Variant));
    printf("sizeof(union DataReinterpret) = %zu bytes\n\n", sizeof(union DataReinterpret));

    // ========== EXAMPLE 7: Practical Use Case - Variable Storage ==========
    printf("%s>>> EXAMPLE 7: Variable Type Indicator Pattern\n%s", CYAN, RESET);
    
    struct TaggedValue {
        int type;  // 1=int, 2=float, 3=char
        union Variant value;
    };
    
    struct TaggedValue values[3];
    
    // Store different types
    values[0].type = 1;
    values[0].value.intVar = 42;
    
    values[1].type = 2;
    values[1].value.floatVar = 3.14159f;
    
    values[2].type = 3;
    values[2].value.charVar = 'X';
    
    // Display with type info
    printf("Tagged Union Value Storage:\n");
    for (int i = 0; i < 3; i++) {
        printf("  Value %d (Type %d): ", i+1, values[i].type);
        switch (values[i].type) {
            case 1: printf("Int = %d\n", values[i].value.intVar); break;
            case 2: printf("Float = %.5f\n", values[i].value.floatVar); break;
            case 3: printf("Char = %c\n", values[i].value.charVar); break;
        }
    }
    printf("\n");

    printf("%s========================================\n", YELLOW);
    printf("   Key Points About Unions:\n");
    printf("========================================%s\n", RESET);
    printf("✓ All members share SAME memory location\n");
    printf("✓ Total size = size of LARGEST member\n");
    printf("✓ Only one member holds valid data at a time\n");
    printf("✓ Changing one member overwrites others\n");
    printf("✓ Use for: Hardware, memory-constrained systems\n");
    printf("✓ Great for: Data reinterpretation, variant types\n\n");

    return 0;
}

void displaySimpleUnion() {
    union SimpleData data;
    
    printf("Initial size: %zu bytes\n", sizeof(union SimpleData));
    printf("(Shared space for: int[%zu], float[%zu], char[%zu])\n\n", 
           sizeof(int), sizeof(float), sizeof(char));
    
    // Store int value
    data.intValue = 1000;
    printf("%sStoring int value: 1000%s\n", GREEN, RESET);
    printf("  intValue: %d\n", data.intValue);
    printf("  floatValue (garbage): %f\n", data.floatValue);
    printf("  charValue (garbage): %c\n", data.charValue);
    printf("  Address of intValue: %p\n\n", (void*)&data.intValue);
    
    // Overwrite with float
    data.floatValue = 3.14f;
    printf("%sStoring float value: 3.14 (overwrites int)%s\n", GREEN, RESET);
    printf("  intValue (corrupted): %d\n", data.intValue);
    printf("  floatValue: %f\n", data.floatValue);
    printf("  charValue (garbage): %c\n", data.charValue);
    printf("  Address of floatValue: %p\n\n", (void*)&data.floatValue);
    
    // Overwrite with char
    data.charValue = 'Z';
    printf("%sStoring char value: 'Z' (overwrites float)%s\n", GREEN, RESET);
    printf("  intValue (corrupted): %d\n", data.intValue);
    printf("  floatValue (corrupted): %f\n", data.floatValue);
    printf("  charValue: %c\n", data.charValue);
}

void displayColorUnion() {
    union Color color;
    
    printf("Color Union Size: %zu bytes\n\n", sizeof(union Color));
    
    // Method 1: Set using individual components
    printf("%sMethod 1: Set individual RGB components%s\n", GREEN, RESET);
    color.components.red = 255;
    color.components.green = 128;
    color.components.blue = 64;
    color.components.alpha = 255;
    
    printf("Red: %d, Green: %d, Blue: %d, Alpha: %d\n", 
           color.components.red, color.components.green, 
           color.components.blue, color.components.alpha);
    printf("Hex Color Value: 0x%08X\n\n", color.rgbValue);
    
    // Method 2: Set entire color as one integer
    printf("%sMethod 2: Set as single integer (0xFFFF8040)%s\n", GREEN, RESET);
    color.rgbValue = 0xFFFF8040;
    printf("Red: %d, Green: %d, Blue: %d, Alpha: %d\n", 
           color.components.red, color.components.green, 
           color.components.blue, color.components.alpha);
    printf("Hex Color Value: 0x%08X\n", color.rgbValue);
}

void displayVariantUnion() {
    union Variant var;
    
    printf("Variant Union Size: %zu bytes\n\n", sizeof(union Variant));
    
    // Store integer
    var.intVar = 12345;
    printf("%sStored Integer: 12345%s\n", GREEN, RESET);
    printf("  intVar: %d\n", var.intVar);
    printf("  Memory address: %p\n\n", (void*)&var);
    
    // Overwrite with float
    var.floatVar = 98.765f;
    printf("%sStored Float: 98.765 (Overwrites integer)%s\n", GREEN, RESET);
    printf("  floatVar: %.3f\n", var.floatVar);
    printf("  Memory address (same): %p\n\n", (void*)&var);
    
    // Overwrite with string
    strcpy(var.stringVar, "Hello!");
    printf("%sStored String: 'Hello!' (Overwrites float)%s\n", GREEN, RESET);
    printf("  stringVar: %s\n", var.stringVar);
    printf("  Memory address (same): %p\n", (void*)&var);
}

void displayDataReinterpret() {
    union DataReinterpret data;
    data.intValue = 170;  // Binary: 10101010
    
    printf("Original Integer Value: %d\n", data.intValue);
    printf("Binary Representation: 10101010\n\n");
    
    printf("Interpreting as bytes:\n");
    for (int i = 0; i < 4; i++) {
        printf("  Byte[%d]: 0x%02X (%d)\n", i, data.bytes[i], data.bytes[i]);
    }
}

void demonstrateMemoryOverlap() {
    union SimpleData data;
    
    printf("%sStoring value 513 as integer in union:%s\n", GREEN, RESET);
    data.intValue = 513;
    printf("  intValue: %d\n", data.intValue);
    printf("  Address of data: %p\n", (void*)&data);
    printf("  Address of intValue: %p\n", (void*)&data.intValue);
    printf("  Address of floatValue: %p\n", (void*)&data.floatValue);
    printf("  Address of charValue: %p\n", (void*)&data.charValue);
    printf("\n%sObservation: All members point to SAME memory address!%s\n", RED, RESET);
    
    printf("\nChanging charValue to 5:\n");
    data.charValue = 5;
    printf("  charValue: %d\n", data.charValue);
    printf("  intValue (corrupted): %d\n", data.intValue);
    printf("  This demonstrates memory OVERLAP!\n");
}
