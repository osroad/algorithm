#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>

using namespace std;

bool isPalindromePermutation(const string &s) {
	bool result = true;
	vector<int> c(128);
	for (auto i : s) {
		++c[i];
	}
	int numOdd = 0;
	for (vector<int>::iterator it = c.begin(); it != c.end(); ++it) {
		if (*it % 2 != 0) {
			++numOdd;
		}
		if (numOdd > 1) {
			result = false;
			break;
		}
	}
	return result;
}

int main(int argc, char const *argv[])
{
	/* code */
	if (isPalindromePermutation(argv[1])) {
		cout << "True" << endl;
	} else {
		cout << "False" << endl;
	}
	return 0;
}