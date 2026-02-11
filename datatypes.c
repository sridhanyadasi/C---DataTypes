/*
Print values of different data types using printf
and observe output or errors.
*/
#include<stdio.h>
int main()
{
    printf("(int) age of sri is: %d\n", 10);
    // Output: Prints integer value correctly

    printf("(float) height of sri is: %.3f\n", 5.5);
    // Output: Prints float with 3 decimal places

    printf("Character : %c\n", 's');
    // Output: Prints character correctly

    printf("Byte : %hh\n", 4);
    // ERROR: C does NOT have a byte data type
    // %hh is NOT a valid format specifier in C

    printf("Long : %ld\n", 33.4);
    // ERROR: %ld expects a long int
    // but 33.4 is a floating-point value

    printf("Double : %.2lf\n", 3.05);
    // Output: Prints double value correctly

    printf("Short : %hd\n", 4);
    // Output: Prints short integer correctly

    printf("Boolean : %Bool", 1);
    // ERROR: C does NOT have a boolean data type
    // %Bool is NOT a valid format specifier

    return 0;
}

/*
Final Result:
Compilation Error / Undefined Output

Main Reason:
C language does not support byte and boolean as
built-in data types. Also, some format specifiers
are invalid or mismatched with data types.
*/
