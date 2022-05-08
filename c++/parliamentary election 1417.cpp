#include<iostream>
#include<queue>
#include<functional>
using namespace std;

priority_queue<int>q;

int arr[100001];
int tmp, cnt = 0, boss;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		boss = arr[0];
	}

	for (int i = 1; i < n; i++)
		q.push(arr[i]);

	while (n > 1 && boss <= q.top())				//segment fault
	{
		if (n == 1)
			break;

		tmp = q.top();
		q.pop();
		boss++; tmp--; cnt++;
		q.push(tmp);

	}
	cout << cnt;

	return 0;
}