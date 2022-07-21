#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int n, m;
vector<string>vec;
vector<string>vec2;


int main()
{
	cin >> n >> m;

	string name;
	for (int i = 0; i < n; i++)
	{
		cin >> name;
		vec.push_back(name);
	}

	sort(vec.begin(), vec.end());

	string str;
	for (int j = 0; j < m; j++)
	{
		cin >> str;

		if (binary_search(vec.begin(), vec.end(), str))// search¸¦ ÇÏ¸é
		{ 
			vec2.push_back(str);
		}
	}

	sort(vec2.begin(), vec2.end());

	cout << vec2.size() << '\n';
	for (int i = 0; i < vec2.size(); i++)
	{
		cout << vec2[i] << '\n';
	}

	return 0;
}