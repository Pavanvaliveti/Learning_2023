// 2. Prints Bits:
// Scan a 32bit integer and prints its bits.

// Concepts to be used.
// - Loops
// - Bitwise Operators

#include<stdio.h>

void printBits(int num)
{
    for (int i=31;i>=0;i--)
    {
        int bit = (num >> i) & 1;
        printf("%d",bit);
    }
    printf("\n");
}

int main()
{
    int n;
    scanf("%d",&n);
    printBits(n);
}

// Here's a breakdown of how the code works:

// 1. The `main` function prompts the user to enter a 32-bit integer using `scanf` and stores the input in the `num` variable.
// 2. The `printBits` function is called with the `num` variable as an argument.
// 3. In the `printBits` function, a loop is used to iterate over the 32 bits of the `num` variable.
// 4. In each iteration of the loop, the `num` variable is right-shifted by `i` positions using the right-shift operator `>>`. This moves the bit at position `i` to the least significant bit position (position 0).
// 5. The right-shifted value of `num` is then bitwise ANDed with `1` using the bitwise AND operator `&`. This operation extracts the least significant bit from the right-shifted value.
// 6. The extracted bit is printed using `printf`.
// 7. The loop continues to iterate from the most significant bit position (`i = 31`) to the least significant bit position (`i = 0`), printing each bit.
// Since the `num` variable passed to the `printBits` function is a copy, any modifications made to `num` within the `printBits` function will not affect the original `num` variable in the `main` function.
// If you need to modify the original `num` variable within the loop, you can pass a pointer to `num` to the `printBits` function, and then dereference the pointer to modify the value. However, for the purpose of printing the bits, it is not necessary to modify the `num` variable itself.