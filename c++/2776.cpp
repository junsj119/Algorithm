#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m, t;
	cin >> t;
	while (t--)
	{
		cin >> n;
		vector<int>vec1(n);
		for (int i = 0; i < n; i++)
			cin >> vec1[i];
		
		cin >> m;
		vector<int>vec2(m);
		for (int i = 0; i < m; i++)
			cin >> vec2[i];

		sort(vec1.begin(), vec1.end());

		for (int i = 0; i < m; i++)
		{
			if (binary_search(vec1.begin(), vec1.end(), vec2[i]))
				cout << "1" << '\n';
			else
				cout << "0" << '\n';
		}	
	}
	return 0;
}