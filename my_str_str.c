#include <stdio.h>
#include <string.h>

int i, j, k;
int flag = 0;
char *my_strstr(char *str, char *sub)
{
    for (i = 0; str[i] != NULL; i++)
    {
        if (str[i] == sub[0])
        {
            for (j = i, k = 0;; k++, j++)
            {
                if (sub[k] == '\0')
                {
                    flag = 1;
                    break;
                }
                if ((str[j] == sub[k]))
                {
                    continue;
                }
                else
                {
                    break;
                }
            }
            if (flag == 1)
            {
                break;
            }
        }
    }
    if (flag)
    {
        return (str + i);
    }
    else
    {
        return NULL;
    }
}

int main()
{
    char s2[] = "This is the statement";
    char s1[] = "hello";
    char *temp;

    temp = my_strstr(s2, s1);

    if (temp == NULL)
    {
        printf("[%s] is not subset of [%s]\n", s1, s2);
    }
    else
    {
        printf("[%s] is a subset of [%s]\n", s1, s2);
        printf("%s\n", temp);
    }
    strcpy(s1, "the");
    temp = my_strstr(s2, s1);

    if (temp == NULL)
    {
        printf("[%s] is not subset of [%s]\n", s1, s2);
    }
    else
    {
        printf("[%s] is a subset of [%s]\n", s1, s2);
        printf("%s\n", temp);
    }

    return 0;
}