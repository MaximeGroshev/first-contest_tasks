#include <stdio.h>
// fourth task
int main()
{
    char arr[100][100];   // первые скобки- кол-во строк, а вторые кол-во столбцов
    char transp_arr[100][100];
    int n = 0;   // строки вводимые
    int m = 0;   // столбцы вводимые
    int x = 0;   // столбцы
    int y = 0;   // строки
    scanf("%d %d", &n, &m);
    for(y = 0; y < n; y++)
    {
        for(x = 0; x < m; x++)
        {
            scanf("%s", &arr[y][x]);
        }
    }

    for(x = 0; x < m; x++)
    {
        for(y = 0; y < n; y++)
        {
            transp_arr[x][y] = arr[y][x];
            printf("%s", transp_arr[x][y]);
        }

        printf("\n");
    }
    return 0;
}
