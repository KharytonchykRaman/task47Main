#include <iostream>
#include <string>
using namespace std;

string neighbor_elements(int** matrix, int width, int length) {

	string msg = "";

	for (int i = 0; i < width; i++)
	{
		for (int j = 0; j < length; j++)
		{
			msg += to_string(matrix[i][j]) + ": ";
			if (i != 0) {
				msg += to_string(matrix[i - 1][j]) + " ";
			}
			if (j != length - 1) {
				msg += to_string(matrix[i][j + 1]) + " ";
			}
			if (i != width - 1) {
				msg += to_string(matrix[i + 1][j])+ " ";
			}
			if (j != 0) {
				msg += to_string(matrix[i][j - 1]) + " ";
			}
			msg += "\n";
		}

	}

	return msg;
}