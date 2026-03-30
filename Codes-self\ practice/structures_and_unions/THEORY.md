# Structures vs Unions in C

## Overview
Both **structures** and **unions** are composite data types in C that allow you to combine multiple data members. However, they work differently in terms of memory allocation.

---

## STRUCTURES (struct)

### Definition
A structure is a composite data type that groups multiple variables of different types under a single name.

### Key Characteristics:
- **Memory Allocation**: Each member has its own memory space
- **Size**: Total size = sum of all member sizes
- **Access**: All members can be accessed simultaneously
- **Independence**: Changes to one member don't affect others

### Syntax:
```c
struct StructName {
    datatype member1;
    datatype member2;
    // ...
};
```

### Example:
```c
struct Student {
    char name[50];     // 50 bytes
    int rollNo;        // 4 bytes
    float gpa;         // 4 bytes
};
// Total Size: 58 bytes (approximately)
```

### Characteristics:
- All members exist **independently** in memory
- Takes up space equal to the **sum of all members**
- **Ideal for**: Storing related data where all fields are needed

---

## UNIONS (union)

### Definition
A union is a composite data type where all members **share the same memory location**. Only one member can hold a value at a time.

### Key Characteristics:
- **Memory Allocation**: All members share the same memory block
- **Size**: Total size = size of the largest member
- **Access**: Accessing one member overwrites others
- **Dependency**: Changing one member affects all

### Syntax:
```c
union UnionName {
    datatype member1;
    datatype member2;
    // ...
};
```

### Example:
```c
union Data {
    int intVal;        // 4 bytes
    char charVal;      // 1 byte
    float floatVal;    // 4 bytes
};
// Total Size: 4 bytes (maximum of all members)
```

### Characteristics:
- All members **overlap** in the same memory location
- Takes up space equal to the **largest member**
- **Ideal for**: Memory-constrained applications or reinterpreting data

---

## Key Differences

| Feature | Structure | Union |
|---------|-----------|-------|
| **Memory** | Each member has own space | Members share same space |
| **Size** | Sum of all members | Size of largest member |
| **Value Storage** | All values stored simultaneously | Only one value at a time |
| **Access** | All members accessible | Only displayed member has valid data |
| **Use Case** | Storing complete records | Memory-efficient storage |
| **Example** | Student record (name, roll, GPA) | Hardware register interpretation |

---

## Memory Visualization

### Structure Example:
```
struct Person {
    char initial;      [A]
    int age;           [25]
    float height;      [5.8]
}

Memory Layout:
[initial] [padding] [age] [height]
   1 byte   3 bytes  4 bytes  4 bytes
   Total: 12 bytes (approximately)
```

### Union Example:
```
union Data {
    char charVal;      
    int intVal;        
    float floatVal;    
}

Memory Layout (All overlapping):
[00000000000000000000000000000000]  32 bits total
  ↑charVal ↑intVal           ↑floatVal
  All share same 4 bytes of memory
```

---

## When to Use What

### Use **Structures** When:
- You need to store multiple related pieces of information together
- All data needs to be maintained simultaneously
- Handling complex data types (records, objects)
- **Examples**: Student info, Employee records, Complex numbers

### Use **Unions** When:
- Memory is limited (embedded systems, IoT)
- You need to interpret the same data in different ways
- Only one data type is needed at a time
- Programming hardware registers
- **Examples**: Hardware bit manipulation, variant data types

---

## Practical Example

### Structure Use Case:
```c
// Student has name, roll, and GPA simultaneously
struct Student {
    char name[50];
    int roll;
    float gpa;
};
```

### Union Use Case:
```c
// A register can be interpreted as int, char array, or bits
union Register {
    int value;
    char bytes[4];
};
```

---

## Summary
- **Structures**: Store complete records with all data maintained
- **Unions**: Save memory by using shared space; only one valid data at a time
- **Choice depends on**: Whether you need all data simultaneously (struct) or just one at a time (union)
