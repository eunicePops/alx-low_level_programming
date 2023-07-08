#include "main.h"

/**
 * binary_to_uint - a function that converts a binary number to an
 * unsigned int.
 * @b: binary.
 *
 * Return: unsigned int.
 */


unsigned int binary_to_uint(const char *b) {
    unsigned int result = 0;

    if (b == NULL)
        return 0;

    for (int i = 0; b[i] != '\0'; i++) {
        if (b[i] == '0')
            result = result * 2;
        else if (b[i] == '1')
            result = result * 2 + 1;
        else
            return 0;
    }

    return result;
}

int main() {
    const char *binary = "11010";
    unsigned int number = binary_to_uint(binary);
    printf("Decimal: %u\n", number);

    return 0;
}

