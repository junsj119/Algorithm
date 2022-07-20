#include<iostream>
#include<string>
#include<algorithm>
#include<vector>

using namespace std;
vector<pair<int, string>>vec;

bool compare(pair<int, string> a, pair<int, string> b)
{
	return a.first < b.first;
}

int main()
{
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int age;
		string name;
		cin >> age >> name;
		vec.push_back(make_pair(age, name));
	}

	stable_sort(vec.begin(), vec.end(), compare);

	for (int i = 0; i < n; i++)
	{
		cout << vec[i].first << " " << vec[i].second << '\n';
	}
	

	return 0;
}