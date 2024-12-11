#include <stdio.h>
char *sub_str(char *str, int str_size, char *sub, int sub_size)
{

    for (int i = 0; i <= str_size - sub_size; i++)
    {
        int j;
        for (j = 0; j < sub_size; j++)
        {
            if (str[i + j] != sub[j])
            {
                break;
            }
        }
        if (j == sub_size)
        {
            return str + i;
        }
    }
    return NULL;
}
int main()
{
    char *str = "Hello world";
    char *sub = "world";
    char *result = sub_str(str, 12, sub, 6);
    if (result != NULL)
    {
        printf("String found at %ld", result - str);
    }
    else
    {
        printf("string was not found");
    }
}