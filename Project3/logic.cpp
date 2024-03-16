#include <iostream>
#include <string>
using namespace std;

void chess_matrix(int** matrix, int width, int length) {

	for (int i = 0; i < width; i++)
	{
		for (int j = 0; j < length; j++)
		{
			matrix[i][j] = (j + i) % 2;
		}
	}
}