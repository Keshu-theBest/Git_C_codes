/*1. Explain the steps a C compiler takes to convert a .c source file into an executable program.

2. What is the role of the preprocessor in C compilation, and how do directives like #include and #define affect it?

3. How does a C compiler detect syntax and semantic errors in the source code?

4. What is the difference between compiling, assembling, and linking in C program execution?

5. How do compiler optimization flags in C (like -O1, -O2) influence the performance and size of the generated executable?

Hand written. Do not copy or chatgpt, else you will repeat the assignment. Due date 21 Jan*/


//--------------------------------------------------------------------------------------------------------------------------//

//-----------------------------------------------------Answer-1-------------------------------------------------------------//


/* The C compilation process involves several steps to convert a .c source file into an executable program:
1. Preprocessing: The preprocessor handles directives like #include and #define. It processes these directives to include header files and replace macros, generating an expanded source code file.
2. Compilation: The compiler translates the preprocessed source code into assembly language specific to the target architecture. During this phase, it checks for syntax and semantic errors in the code.
3. Assembly: The assembler converts the assembly code into machine code, producing an object file (.o file) that contains binary instructions.
4. Linking: The linker combines multiple object files and libraries into a single executable program. It resolves references to external functions and variables, ensuring that all necessary code is included in the final executable.
5. Output: The final output is an executable file that can be run on the target system. */ 


//-----------------------------------------------------Answer-2-------------------------------------------------------------//
/* The preprocessor plays a crucial role in the C compilation process by handling directives that modify the source code before actual compilation.
- #include: This directive tells the preprocessor to include the contents of a specified header file into the source file. This is essential for incorporating standard libraries and user-defined headers.
- #define: This directive allows the definition of macros, which are symbolic names for constant values or code snippets. The preprocessor replaces occurrences of these macros in the code with their defined values before compilation.
Overall, the preprocessor prepares the source code for compilation by expanding macros and including necessary files, ensuring that the compiler works with a complete and accurate version of the code. */ 


//-----------------------------------------------------Answer-3-------------------------------------------------------------//
/* A C compiler detects syntax and semantic errors through a series of checks during the compilation phase:
- Syntax Errors: The compiler analyzes the structure of the code to ensure it adheres to the rules of the C language. It checks for correct use of keywords, punctuation, and overall code structure. If it encounters any violations, it generates error messages indicating the location and nature of the syntax errors.
- Semantic Errors: Beyond syntax, the compiler also checks for semantic correctness, which involves ensuring that the code makes logical sense. This includes type checking, ensuring variables are declared before use, and verifying that operations are valid for the given data types. If any semantic issues are found, the compiler produces error messages to help the programmer identify and fix the problems.
Through these checks, the compiler helps ensure that the source code is both syntactically and semantically correct before proceeding to the next stages of compilation. */


//-----------------------------------------------------Answer-4-------------------------------------------------------------//
/* Compiling, assembling, and linking are distinct stages in the C program execution process:
- Compiling: This stage involves translating the high-level C source code into assembly language. The compiler checks for syntax and semantic errors during this phase and generates assembly code that is specific to the target architecture.
- Assembling: In this stage, the assembler takes the assembly code produced by the compiler and converts it into machine code, resulting in an object file (.o file). This file contains binary instructions that the computer can understand.
- Linking: The linking stage combines multiple object files and libraries into a single executable program. The linker resolves references to external functions and variables, ensuring that all necessary code is included in the final executable. It produces the final output that can be run on the target system.
Each of these stages is essential for transforming high-level C code into a runnable program. */


//-----------------------------------------------------Answer-5-------------------------------------------------------------//
/* Compiler optimization flags in C, such as -O1 and -O2, influence the performance and size of the generated executable by applying various optimization techniques during the compilation process:
- -O1: This flag enables basic optimizations that improve the performance of the generated code without significantly increasing compilation time. It focuses on reducing code size and improving execution speed by eliminating redundant code and optimizing simple loops.
- -O2: This flag enables a higher level of optimization compared to -O1. It applies more aggressive optimization techniques, such as inlining functions, unrolling loops, and optimizing memory access patterns. While -O2 can lead to better performance, it may also increase compilation time and the size of the generated executable.
Overall, using optimization flags helps developers balance the trade-offs between execution speed, code size, and compilation time based on the specific needs of their applications. */

//--------------------------------------------------------------------------------------------------------------------------//