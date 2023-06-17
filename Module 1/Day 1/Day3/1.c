// Write a program to print the given pattern below using 3 functions (1st to accept n and to print from 1 to n, 2nd to accept n and print spaces in between, 3rd to accept the n and print from n to 1)
// 1234554321
// 1234  4321
// 123    321
// 12      21
// 1        1
#include <stdio.h>

void printNumbers(int n) {
    for (int i = 1; i <= n; i++) {
        printf("%d", i);
    }
}

void printSpaces(int n) {
    for (int i = 1; i <= n; i++) {
        printf(" ");
    }
}

void printreversenumbers(int n)
{
    for (int i = n; i>=1;i--)
    {
        printf("%d",i);
    }
}

void printPattern(int n) {
    for (int i = n, x = 0; i >= 1; i--, x += 2) {
        printNumbers(i);
        printSpaces(x);
        printreversenumbers(i);
        printf("\n");
    }
}

int main() {
    int n;
    scanf("%d",&n);
    printPattern(n);
    
    return 0;
}