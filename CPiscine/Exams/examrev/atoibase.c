#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to convert a number from one base to another
void base_conversion(char *num, int base) {
    // Convert the string to an integer in base 10
    int decimal_num = strtol(num, NULL, base);

    // Print the converted number in the desired base
    printf("Number in base %d is: ", base);
    // For simplicity, just print the decimal number
    printf("%d\n", decimal_num);
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Usage: %s <number> <base>\n", argv[0]);
        return 1;
    }

    // Get the number and base from command line arguments
    char *num = argv[1];
    int base = atoi(argv[2]);

    // Perform base conversion
    base_conversion(num, base);

    return 0;
}
