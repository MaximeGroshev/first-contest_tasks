#include <stdio.h>
// third task
int main()
{
    int arr[100][10];   // ������ ������- ���-�� �����, � ������ ���-�� ��������
    int transp_arr[10][100];
    int n = 0;   // ������ ��������
    int m = 0;   // ������� ��������
    int x = 0;   // �������
    int y = 0;   // ������
    scanf("%d %d", &n, &m);
    for(y = 0; y < n; y++)
    {
        for(x = 0; x < m; x++)
        {
            scanf("%d", &arr[y][x]);
        }
    }

    for(x = 0; x < m; x++)
    {
        for(y = 0; y < n; y++)
        {
            transp_arr[x][y] = arr[y][x];
            printf("%d ", transp_arr[x][y]);
        }

        printf("\n");
    }
    return 0;
}
