#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include<functional>

using namespace std;

int n;
priority_queue<int, vector<int>, greater<int>>q;
pair<int, int>p[100001];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> p[i].first >> p[i].second;
	}
	sort(p, p + n);

	q.push(p[0].second);

	for (int i = 1; i < n; i++)
	{
		if (q.top() <= p[i].first)
		{
			q.pop();
			q.push(p[i].second);
		}
		else
			q.push(p[i].second);
	}
	cout << q.size();

	return 0;
}
