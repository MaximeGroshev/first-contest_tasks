#include <stdio.h>

int main()
{
    int arr[1000];
    int size = 0;
    int count = 0;

    scanf("%d", &size);

    int i = 0;
    for(i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    int k = 0;
    int tmp = 0;
    for(i = 0; i < size ; i++)
    {
        for(k = 0; k < size - i - 1; k++)
        {
            if(arr[k] > arr[k + 1])
            {
                tmp = arr[k];
                arr[k] = arr[k + 1];
                arr[k + 1] = tmp;
            }
        }
    }

    scanf("%d", &count);
    int num  = size - count;
    for(i = 0; num < size ; num++)
    {
            printf("%d ", arr[num]);
    }
    return 0;
}
