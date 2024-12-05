// Detecting Power of Two. Write a program to check if a given number is a power of two using bit manipulation.

// WTD: Given an integer, determine whether it is a power of 2 or not. Your solution should only use bitwise operations. Avoid using mathematical functions like logarithms or multiplication.

// (e.g.: I/P:  32; O/P: True)
#include <stdio.h>
int power_of_two(int num)
{
    int flag = 0;
    if ((num & (num - 1)) == 0)
    {
        flag = 1;
    }
    return flag;
}
int main()
{
    int num = 32;
    if (power_of_two(num) == 1)
    {
        printf("Number is power of 2");
    }
    else
    {

        printf("Number is not power of two");
    }
}