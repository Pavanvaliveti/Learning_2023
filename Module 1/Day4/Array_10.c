//Binary/Octal/Hex to Decimal Conversion
#include <stdio.h>
#include <stdlib.h>

long binaryToDecimal(const char* binary) {
    return strtol(binary, NULL, 2);
}

long octalToDecimal(const char* octal) {
    return strtol(octal, NULL, 8);
}

long hexadecimalToDecimal(const char* hex) {
    return strtol(hex, NULL, 16);
}

int main() {
    char binary[] = "101010"; // Binary number
    char octal[] = "52"; // Octal number
    char hex[] = "1A"; // Hexadecimal number

    long decimalBinary = binaryToDecimal(binary);
    long decimalOctal = octalToDecimal(octal);
    long decimalHex = hexadecimalToDecimal(hex);

    printf("Binary to Decimal: %ld\n", decimalBinary);
    printf("Octal to Decimal: %ld\n", decimalOctal);
    printf("Hexadecimal to Decimal: %ld\n", decimalHex);

    return 0;
}
