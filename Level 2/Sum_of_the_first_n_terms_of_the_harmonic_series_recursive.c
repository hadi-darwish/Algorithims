// Write a recursive function float harm_rec(int n)
// which computes the sum of the first n terms of the harmonic series (n is passed in parameter):
// 1+1/2+1/3+⋯+1n

// Example:
// Input: 4
// Output: 2.083333

// Input: 10
// Output: 2.928968

// Input: 150
// Output: 5.591181

// Input: 0
// Output: 0

#include <stdio.h>
#include <conio.h>

float harm_rec(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return (1.0 / n) + harm_rec(n - 1);
    }
}

void main()
{
    int n;

    printf("Sum of harmonic series of 4 = %f \n", harm_rec(4));     // 2.083333
    printf("Sum of harmonic series of 10 = %f \n", harm_rec(10));   // 2.928968
    printf("Sum of harmonic series of 150 = %f \n", harm_rec(150)); // 5.591181

    do
    {
        printf("Enter a positive integer: ");
        scanf("%d", &n);
    } while (n < 0);

    printf("Sum of harmonic series of %d = %f \n", n, harm_rec(n));

    getch();
}
