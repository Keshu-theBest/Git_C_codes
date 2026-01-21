//QUestion 1: Write a program to print the size of different data types

#include <stdio.h>

int main() {
    //Printing size of different data types using sizeof operator
    printf("Size of char: %zu byte(s)\n", sizeof(char));
    printf("Size of int: %zu byte(s)\n", sizeof(int));
    printf("Size of float: %zu byte(s)\n", sizeof(float));
    printf("Size of double: %zu byte(s)\n", sizeof(double));
    printf("Size of short: %zu byte(s)\n", sizeof(short));
    printf("Size of long: %zu byte(s)\n", sizeof(long));
    printf("Size of long long: %zu byte(s)\n", sizeof(long long));
    //%zu is the format specifier for size_t type

    return 0;
}

//Level: Beginner
//Topic: Data Types in C
//Difficulty: Easy