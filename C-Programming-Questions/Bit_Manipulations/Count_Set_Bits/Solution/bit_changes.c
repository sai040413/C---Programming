// Count Number of Flips to Convert A to B.Implement a function that counts the number of flips required to convert integer A to integer B.

//     WTD : You are given two integers A and B.Determine the number of bits you need to flip to convert A into B using bitwise operations.

//           (e.g. : I / P : A = 29(0b11101), B = 15(0b01111); O / P : 2)
#include <stdio.h>
int count_diff(int a, int b)
{
    int result = a ^ b;
    int count = 0;
    while (result)
    {
        count += result & 1;
        result >>= 1;
    }
    return count;
}

int main()
{
    int a = 29;
    int b = 15;
    printf("Diff b/w A  & B is %d\n", count_diff(a, b));
}