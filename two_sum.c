// 7) array[ ]={10,35,25,15,20,5} in this array which of the two
// Elements sum meets the target=35 print those values and indexes?
#include <stdio.h>
int main()
{
    int arr[] = {10, 30, 35, 25, 15, 20, 5};
    int key = 35;
    for (int i = 0; i < 7; i++)
    {
        for (int j = i + 1; j < 7; j++)
        {
            if (arr[i] + arr[j] == key)
            {
                printf("%d %d index num1-> %d num2-> %d\n", arr[i], arr[j], i, j);
            }
        }
    }
}
