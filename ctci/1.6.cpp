#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>

using namespace std;

string compressString(const string &s) {
	if (s.empty()) {
		return "";
	}

	vector<char> cs;
	int csi = 0, curCount = 0;
	cs.push_back(s[0]);
	for (auto i : s) {
		if (cs.back() == i) {
			++curCount;
		} else {
			cs.push_back(curCount);
			cs.push_back(i);
			curCount = 1;
		}
	}
	if (cs.size() == s.size()) {
		return s;
	} else {
		string r("");
		for (std::vector<char>::iterator it = cs.begin(); it != cs.end(); ++it) {
			r.push_back(*it);
		}
		cout << r << endl;
		return r;
	}
}

int main(int argc, char const *argv[])
{
	/* code */
	cout << compressString(argv[1]) << endl;
	return 0;
}