#include <stdio.h>
int Prime(int num)
{
    int flag = 1;
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            flag = 0;
        }
    }
    return flag;
}
int main()
{
    for (int i = 1; i < 100; i++)
    {
        if (Prime(i))
        {
            printf("%d ", i);
        }
    }
}