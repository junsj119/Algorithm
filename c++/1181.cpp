#include<iostream>
#include<string>
#include<algorithm>

using namespace std;
int n;
string s[100001], tmp;

bool compare(string a, string b)
{
	if (a.size() == b.size())
		return a < b;
	else
		return a.size() < b.size();
}
int main()
{
	cin >> n;
	
	for (int i = 0; i < n; i++)
		cin >> s[i];

	sort(s, s + n, compare);

	for (int i = 0; i < n; i++)
	{
		if (tmp == s[i])
			continue;

		cout << s[i] << '\n';
		tmp = s[i];
	}

	return 0;
}