// Write a recursive function float harm_rec_threshold(float s, int i)
// which calculates the sum of the terms of the harmonic series
// and stops when the value of the term added is lower than a positive threshold s
// passed in parameter: 1 + 1/2 + 1/3 + ⋯ + 1/n
// where 1/n≥s and (1/(n+1))<s

// Example:
// Input: 0.5
// Output: 1.833333

// Input: 0.1
// Output: 2.928968

// Input: 0.01
// Output: 5.187386

#include <stdio.h>
#include <conio.h>

float harm_rec_threshold(float s, int i)
{
    if (1.0 / i < s)
    {
        return 0;
    }
    else
    {
        return (1.0 / i) + harm_rec_threshold(s, i + 1);
    }
}

void main()
{
    float s;

    printf("Sum of harmonic series of threshold 0.5 = %f \n", harm_rec_threshold(0.5, 1));   // 1.833333
    printf("Sum of harmonic series of threshold 0.1 = %f \n", harm_rec_threshold(0.1, 1));   // 2.928968
    printf("Sum of harmonic series of threshold 0.01 = %f \n", harm_rec_threshold(0.01, 1)); // 5.187386

    do
    {
        printf("Enter a positive threshold: ");
        scanf("%f", &s);
    } while (s < 0);

    printf("Sum of harmonic series of threshold %f = %f \n", s, harm_rec_threshold(s, 1));

    getch();
}