#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>

using namespace std;

int getSpaceNumber(const string &s, int len) {
	int r = 0;
	for (int i = 0; i < len; ++i) {
		if (s[i] == ' ') {
			++r;
		}
	}
	return r;
}

void URLify(string s, int len) {
	int nLen = len + getSpaceNumber(s, len) * 2;
	bool isEndSpace = true;
	int i = nLen - 1, j = i;
	for (; i > 0; --i) {
		if (s[i] != ' ') {
			s[j--] = s[i];
			isEndSpace = false;
		} else if (!isEndSpace) {
			s[j--] = '0';
			s[j--] = '2';
			s[j--] = '%';
		}
	}
	cout << '\"' << s.substr(0, nLen) << '\"' << endl;
}

int main(int argc, char const *argv[])
{
	/* code */
	URLify(argv[1], atoi(argv[2]));
	return 0;
}