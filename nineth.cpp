#include <stdio.h>

int main()
{
    int arr[1000][2];
    int b = 0; //numbers of boxes
    int k = 0; //number of box we buy
    scanf("%d", &b);

    for(int i = 0; i < b; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for(int i = 0; i < b; i++)
    {
        for(int j = 0; j < b - i - 1; j++)
        {
            int tmp = 0;
            int tmp2 = 0;
            if(arr[j][0] > arr[j + 1][0])
            {
             tmp = arr[j][0];
             arr[j][0] = arr[j + 1][0];
             arr[j + 1][0] = tmp;

             tmp2 = arr[j][1];
             arr[j][1] = arr[j + 1][1];
             arr[j + 1][1] = tmp2;
            }
        }
    }

    int s = 0;     // my sum
    int price = 0; //total price
    scanf("%d", &s);
    int sweets = 0; //number of candies we buy
    int i = 0;
    for(i = 0; i < b; i++)
    {
        price += arr[i][0];

        if(price <= s)
        {
            sweets += arr[i][1];
            k++;
        }
    }
    printf("%d %d", k, sweets);
    return 0;
}
