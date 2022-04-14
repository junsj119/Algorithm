#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string s, t;
bool result = 0;

int main() {

	cin >> s >> t;


	while (1) {

		if (s.size() == t.size()) {
			if (s == t)
				result = 1;
			break;
		}

		if (t[t.size() - 1] == 'A')
			t.pop_back();
		else {
			t.pop_back();
			reverse(t.begin(), t.end());
		}
	}

	cout << result << endl;
}