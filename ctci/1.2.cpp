#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool isPermute(const string& a, const string& b) {
	bool result = false;
	int n = a.length();
	if (n == b.length()) {
		result = true;
		vector<int> ca(128);
		for (auto i : a) {
			++ca[i];
		}
		vector<int> cb(128);
		for (auto i : b) {
			++cb[i];
		}
		for (int i = 0; i < 128; ++i) {
			if (ca[i] != cb[i]) {
				result = false;
				break;
			}
		}

	}
	return result;
}

int main(int argc, char const *argv[])
{
	/* code */
	bool r = isPermute(argv[1], argv[2]);
	if (r) {
		cout << argv[1] << " is a permutation of " << argv[2] << endl;
	} else {
		cout << argv[1] << " is not a permutation of " << argv[2] << endl;
	}
	return 0;
}