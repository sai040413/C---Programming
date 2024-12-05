// Write a function that converts a decimal number to its binary representation using bit manipulation.

// WTD: Given a decimal number, convert it into its binary representation using bitwise operations. Your function should return the binary string.

// (e.g.: I/P: 5; O/P: 0b101)

#include <stdio.h>
int result = 0;
int bin(int num)
{
    for (int i = 7; i >= 0; i--)
    {
        int temp = num >> i & 1;
        result = result * 10 + temp;
    }
    return result;
}
int main()
{
    int num = 5;
    // for (int i = 7; i >= 0; i--)
    // {
    //     printf("%d", num >> i & 1);
    //     if (i % 4 == 0)
    //     {
    //         printf(" ");

    //     }
    // }
    printf("%d", bin(num));
}