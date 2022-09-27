#include <stdio.h>
#include <math.h>
int main()
{
    int arr[1000];
    int plus[1000];
    int minus[1000];
    int size = 0;
    scanf("%d", &size);

    int i = 0;
    for(i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    int x = 0;
    int y = 0;
    for(int k = 0; k < size; k++)
    {
        if(arr[k] >= 0)
        {
            plus[x] = arr[k];
            x++;
        }

        else if(arr[k] < 0)
        {
            minus[y] = arr[k];
            y++;
        }

    }

    for(int k = 0; k < x; k++)
    {
        for(int b = 0; b < x - k - 1; b++)
        {
            int tmp = 0;
            if(plus[b] > plus[b + 1])
            {
                tmp = plus[b];
                plus[b] = plus[b + 1];
                plus[b + 1] = tmp;
            }
        }
    }

    for(int l = 0; l < y; l++)
    {
        for(int c = 0; c < y - l - 1; c++)
        {
            int tmp2 = 0;
            if(fabs(minus[c]) > fabs(minus[c + 1]))
            {
                tmp2 = minus[c];
                minus[c] = minus[c + 1];
                minus[c + 1] = tmp2;
            }
        }
    }

    for(int n = 0; n < x ; n++)
    {
        printf("%d ", plus[n]);
    }

    for(int m = 0; m < y ; m++)
    {
        printf("%d ", minus[m]);
    }

    return 0;
}
