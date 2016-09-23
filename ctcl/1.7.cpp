#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>

using namespace std;

class Matrix {
public:
	vector<string> rows, cols;

};

//void rotateLayer(Matrix &m, int numLayer) {
void rotateLayer(int m[5][5], int numLayer, int n) {
	for (int i = numLayer; i < n - 1 - numLayer; ++i) {
		int tmp = m[numLayer][i];
		//string tmp_r = m.rows[numLayer];
		//string tmp_c = m.cols[i];

		m[numLayer][i] = m[n - 1 - i][numLayer];
		//m.rows[numLayer] = m.rows[n - 1 - i];
		//m.cols[i] = m.cols[numLayer];
		
		m[n - 1 - i][numLayer] = m[n - 1 - numLayer][n - 1 - i];
		//m.rows[n - 1 - i] = m.rows[n - 1 - numLayer];
		//m.cols[numLayer] = m.cols[n - 1 - i];

		m[n - 1 - numLayer][n - 1 - i] = m[i][n - 1 - numLayer];
		//m.rows[n - 1 - numLayer] = m.rows[i];
		//m.cols[n - 1 - i] = m.cols[n - 1 - numLayer];

		m[i][n - 1 - numLayer] = tmp;
		//m.rows[i] = tmp_r;
		//m.cols[n - 1 - numLayer] = tmp_c;
	}
}

/*
void rotateMatrix(Matrix &m) {
	int n = m.rows.size();
	int countLayers = n / 2;
	for (int i = 0; i < countLayers; ++i) {
		rotateLayer(i);
	}

}
*/

void rotateMatrix(int m[5][5], int n) {
	int countLayers = n / 2;
	for (int i = 0; i < countLayers; ++i) {
		rotateLayer(m, i, n);
	}

}

int main(int argc, char const *argv[])
{
	/* code */
	//Matrix m;
	int m[5][5] = {{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25}};

	cout << "original matrix:" << endl;
	for (int i = 0; i < 5; ++i) {
		for (int j = 0; j < 5; ++j) {
			cout << m[i][j] << '\t'; 
		}
		cout << endl;
	}
	rotateMatrix(m, 5);
	cout << "matrix rotated 90 degree sunwise:" << endl;
	for (int i = 0; i < 5; ++i) {
		for (int j = 0; j < 5; ++j) {
			cout << m[i][j] << '\t'; 
		}
		cout << endl;
	}return 0;
}