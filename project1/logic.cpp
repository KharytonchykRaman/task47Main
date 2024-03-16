#include <iostream>

using namespace std;

int max_sum_col(int** matrix, int width, int length) {


	int maxSum = 0;
	int maxSumIndex = 0;

	for (int i = 0; i < length; i++)
	{
		int sum = 0;
		for (int j = 0; j < width; j++)
		{
			sum += matrix[j][i];
		}
		if (sum > maxSum)
		{
			maxSum = sum;
			maxSumIndex = i;
		}
	}
	return maxSumIndex;
}