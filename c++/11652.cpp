#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int n;
long long num;
vector<long long> vec;
#define tmp -10000000000001

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> num;
		vec.push_back(num);
	}

	sort(vec.begin(), vec.end());

	long long temp = tmp;
	long long output;

	for (int i = 0; i < n; i++)
	{
		auto a = lower_bound(vec.begin(), vec.end(), vec[i]) - vec.begin();
		auto b = upper_bound(vec.begin(), vec.end(), vec[i]) - vec.begin();

		if (temp < (b - a))
		{
			temp = b - a;
			output = vec[i];
		}

	}
	cout << output;

	return 0;
}