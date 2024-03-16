#include <iostream>

using namespace std;

string convert_matrix_string(int** matrix, int width, int length);
void chess_matrix(int** matrix, int width, int length);

int main() {
	int width = 8;
	int length = 8;

	int** matrix = new int* [width];
	for (int i = 0; i < width; i++)
	{
		matrix[i] = new int[length];
	}

	chess_matrix(matrix, width, length);
	cout << convert_matrix_string(matrix, width, length);

	for (int i = 0; i < width; i++)
	{
		delete[] matrix[i];
	}
	delete[] matrix;

	return 0;
}