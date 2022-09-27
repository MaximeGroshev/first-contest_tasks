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

    scanf("%d", &count);
    int num = size  - count;
    int k = 0;
    for(i = 0; i < size ; i++)
    {
        int res = 0;
        for(k = 0; k < size; k++)
        {
            if(arr[i] >= arr[k])
            {
                res++;
            }
        }

        if(res > num)
        {
            printf("%d ", arr[i]);
        }

    }
    return 0;
}
