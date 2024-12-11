#include <stdio.h>
#include <stdlib.h>

void fun()
{
    int *p = malloc(sizeof(int)); // Allocate memory
    if (p == NULL)                // Check if malloc succeeded
    {
        fprintf(stderr, "Memory allocation failed\n");
        return;
    }
    *p = 55; // Use the allocated memory
    printf("%d\n", *p);
    free(p); // Free the allocated memory
}

int main()
{
    fun();
    return 0;
}
