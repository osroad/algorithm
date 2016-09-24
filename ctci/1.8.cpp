#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>

using namespace std;

void zeroMatrix(int matrix[][5], int m, int n) {
	for (int i = 0; i < m; ++i) {
		for (int j = 0; j < n; ++j) {
			if (matrix[i][j] == 0) {
				matrix[i][0] = 0;
				matrix[0][j] = 0;
			}
		}
	}

	for (int i = 0; i < m; ++i) {
		if (matrix[i][0] == 0) {
			for (int j = 0; j < n; ++j) {
				matrix[i][j] = 0;
			}
		}
	}

	for (int i = 0; i < n; ++i) {
		if (matrix[0][i] == 0) {
			for (int j = 0; j < m; ++j) {
				matrix[j][i] = 0;
			}
		}
	}
}

int main(int argc, char const *argv[])
{
	int matrix[4][5] = {{1,2,3,4,5}, {3,2,5,0,32}, {23,24,1,4,0}, {1,3,4,2,4}};
	cout << "original matrix:" << endl;
	for (int i = 0; i < 4; ++i)	{
		for (int j = 0; j < 5; ++j) {
			cout << matrix[i][j] << '\t';	
		}
		cout << endl;
	}
	zeroMatrix(matrix, 4, 5);
	cout << "zero\'d matrix:" << endl;
	for (int i = 0; i < 4; ++i)	{
		for (int j = 0; j < 5; ++j) {
			cout << matrix[i][j] << '\t';	
		}
		cout << endl;
	}
	return 0;
}