#include<iostream>
#include<queue>
#include<functional>
#include<algorithm>
using namespace std;

priority_queue<int, vector<int>, greater<int>>q;
pair<int, int>pa[100001];
int arr[100001];
int n, p, d, sum;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> pa[i].second >> pa[i].first;		// p, d
	}

	sort(pa, pa + n);

	for (int i = 0; i < n; i++)
	{
		sum += pa[i].second;
		q.push(pa[i].second);

		if (q.size() > pa[i].first)		//똑같은수가 들어가면 작은수를 제외시킨다.
		{
			sum -= q.top();
			q.pop();
		}
	}
	cout << sum;
	return 0;
}