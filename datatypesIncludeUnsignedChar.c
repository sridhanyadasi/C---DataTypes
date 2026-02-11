/*
Print values of different data types using printf
using correct format specifiers in C.
*/
#include<stdio.h>

int main()
{
    int age = 10;                // integer data type
    float height = 5.5f;         // float data type
    char ch = 's';               // character data type
    unsigned char byte = 4;      // byte is represented using unsigned char
    long int number = 33;        // long integer data type
    double value = 3.05;         // double data type
    short int small = 4;         // short integer data type
    int isTrue = 1;              // boolean is represented using int in C

    printf("(int) age of sri is: %d\n", age);
    printf("(float) height of sri is: %.3f\n", height);
    printf("Character : %c\n", ch);
    printf("Byte : %hhu\n", byte);
    printf("Long : %ld\n", number);
    printf("Double : %.2lf\n", value);
    printf("Short : %hd\n", small);
    printf("Boolean : %d\n", isTrue);

    return 0;
}
