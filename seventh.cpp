#include <stdio.h>

int main()
{
    int arr[100][100];
    int n = 0; //lines
    int m = 0; //colones
    scanf("%d %d", &n, &m);

    int i = 0;
    for(i = 0; i < n; i++)
    {
        int j = 0;
        for(j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int max_sum = arr[0][0];
    int number_of_max_colones = 0;
    for(int j = 0; j < m; j++)
    {
        int during_sum = 0;
        for(i = 0; i < m; i++)
        {
            during_sum += arr[i][j];
        }

        if(during_sum >= max_sum)
        {
            max_sum = during_sum;
            number_of_max_colones = j;

        }

    }
    printf("%d", number_of_max_colones);
    return 0;
}
