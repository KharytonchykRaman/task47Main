#include <iostream>
#include <string>

using namespace std;

string convert_matrix_string(int** matrix, int width, int length) {

	string msg = "";

	for (int i = 0; i < width; i++)
	{
		for (int j = 0; j < length; j++)
		{
			msg += to_string(matrix[i][j]) + "\t";
		}
		msg += "\n";
	}

	return msg;
}

void matrix_init_rnd(int** matrix, int width, int length, int min, int max) {

	for (int i = 0; i < width; i++)
	{
		for (int j = 0; j < length; j++)
		{
			matrix[i][j] = rand() % (max - min + 1) + min;
		}
	}
}