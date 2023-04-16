// Write a recursive function that calculates the factorial of a positive integer.
// The function should return the factorial as an integer.
// For example, the factorial of 5 is 5 * 4 * 3 * 2 * 1 = 120.
//
// The function prototype is:
// int factorial(int n)
//
// Example:
// Input: 5
// Output: 120
//
// Input: 10
// Output: 3628800
//
// Input: 0
// Output: 1

#include <stdio.h>
#include <conio.h>

int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}

void main()
{
    int n;

    printf("Factorial of 5 = %d \n", factorial(5));   // 120
    printf("Factorial of 10 = %d \n", factorial(10)); // 3628800
    printf("Factorial of 0 = %d \n", factorial(0));   // 1

    do
    {
        printf("Enter a positive integer: ");
        scanf("%d", &n);
    } while (n < 0);

    printf("Factorial of %d = %d \n", n, factorial(n));
}