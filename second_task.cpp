#include <stdio.h>
// third task
int main()
{
    int arr[10][10];   // первые скобки- кол-во строк, а вторые кол-во столбцов
    int transp_arr[10][10];
    int N = 0;
    int x = 0;   // столбцы
    int y = 0;   // строки
    scanf("%d", &N);
    for(y = 0; y < N; y++)
    {
        for(x = 0; x < N; x++)
        {
            scanf("%d", &arr[y][x]);
        }
    }

    for(x = 0; x < N; x++)
    {
        for(y = 0; y < N; y++)
        {
            transp_arr[x][y] = arr[y][x];
            printf("%d ", transp_arr[x][y]);
        }

        printf("\n");
    }
    return 0;
}

