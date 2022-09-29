#include <stdio.h>
#include <stdlib.h>
// fourth task

int main() {

	char arr[20][20];
	char trans_arr[20][20];

	int line = 0;    //before transporation
	int column = 0;  //before transporation

	scanf("%d %d", &line, &column);

	for(int i = 0; i < line; i++) {
		for(int j = 0; j <= column; j++) {
			scanf("%c", &arr[i][j]);
			if(arr[i][j] == '\n')
			{
                  arr[i][j] = '\0';
			}
		}
	}

	for(int j = 0; j <= column; j++) {
		for(int i = 0; i < line; i++) {

                trans_arr[j][i] = arr[i][j];
		}
	}

	char tmp = 0;


	for (int i = 0; i <= (column / 2); i++) {
		for (int j = 0; j < line; j++) {
			tmp = trans_arr[i][j];
			trans_arr[i][j] = trans_arr[column - i][j];
			trans_arr[column - i][j] = tmp;
		}

    }

	for (int i = 0; i <= column; i++) {
		for (int j = 0; j < line; j++) {
			printf("%c", trans_arr[i][j]);
		}
		printf("\n");
	}


	return 0;

}
