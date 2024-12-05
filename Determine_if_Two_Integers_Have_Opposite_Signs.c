// Determine if Two Integers Have Opposite Signs. Write a function to determine if two integers have opposite signs using bit manipulation.

// WTD: You are given two integers. Use bitwise operations to determine if they have opposite signs. Your function should return a boolean value.

// (e.g.: I/P:  -4, 5; O/P: True)
#include <stdio.h>
int sign(int a, int b)
{
    int flag = 0;
    if ((a >> 31 & 1) && (b >> 31 & 1))
    {
        flag = 1;
    }
    return flag;

    // return ((a ^ b) < 0);
}
int main()
{
    int num1 = -4, num2 = 5;
    if (sign(num1, num2))
    {
        printf("Signs are same  ");
    }
    else
    {
        printf("signs are differnt");
    }
}
