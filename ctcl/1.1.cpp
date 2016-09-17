#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool isUnique(const string& s) {
	bool result = true;
	vector<bool> bs(128, false);
	for (auto i : s) {
		if (bs[i] == true) {
			result = false;
			break;
		} else {
			bs[i] = true;
		}
	}
	return result;
}

bool isUniqueBit(const string& s) {
	// TODO
}

int main(int argc, char const *argv[])
{
	string s(argv[1]);
	if (isUnique(s)) {
		cout << s << " is unique" << endl;
	} else {
		cout << s << " is not unique" << endl;
	}
	return 0;
}