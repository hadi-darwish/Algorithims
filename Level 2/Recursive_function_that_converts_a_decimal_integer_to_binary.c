// Write a recursive function that converts a decimal integer to binary.
// The function should return the binary number as an integer.
// For example, the decimal number 234 is 11101010 in binary.

// The function prototype is:
// int dec_to_bin(int n)

// Example:
// Input: 234
// Output: 11101010

#include <stdio.h>
#include <conio.h>

int dec_to_bin(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return (n % 2) + 10 * dec_to_bin(n / 2);
    }
}

void main()
{
    int n;

    printf("Binary of 234 = %d \n", dec_to_bin(234)); // 11101010

    do
    {
        printf("Enter a positive integer: ");
        scanf("%d", &n);
    } while (n < 0);

    printf("Binary of %d = %d \n", n, dec_to_bin(n));

    getch();
}