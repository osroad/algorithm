#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>

using namespace std;

bool isOneCharUpdated(const string &a, const string &b) {
	bool result = false;
	for (int i = 0; i < a.length(); ++i) {
		if (a[i] != b[i]) {
			if (result == true) {
				result = false;
				break;
			}
			result = true;
		}
	}
	return result;
}

// check if b is one char added to a
bool isOneCharAdded(const string &a, const string &b) {
	bool result = false;
	int i = 0, j = 0;
	for (; i < a.length(); ++i, ++j) {
		if (a[i] != b[j]) {
			if (result = true || a[i] != b[++j]) {
				result = false;
				break;
			}
			result = true;
		}

	}
	if (i == a.length()) {
		result = true;
	}
	return result;
}

bool isOneCharAway(const string &a, const string &b) {
	bool result = false;
	int lenDiff = a.length() - b.length();
	switch (lenDiff) {
		case 0:
		result = isOneCharUpdated(a, b);
		break;
		case 1:
		result = isOneCharAdded(b, a);
		case -1:
		result = isOneCharAdded(a, b);
		break;
		default:
		break;
	}
	
	return result;
}

int main(int argc, char const *argv[])
{
	/* code */
	if (isOneCharAway(argv[1], argv[2])) {
		cout << "True" << endl;
	} else {
		cout << "False" << endl;
	}
	return 0;
}