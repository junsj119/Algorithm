#include<iostream>
#include<queue>

using namespace std;

int n, k;
queue<int> q;

int main()
{
	cin >> n >> k;

	for (int i = 1; i < n + 1; i++)
	{
		q.push(i);
	}
	cout << "<";
	while (q.size() != 1)
	{
		for (int i = 0; i < k - 1; i++)
		{
			int tmp = q.front();
			q.pop();
			q.push(tmp);
		}
		cout << q.front() << ", ";
		q.pop();
	}
	while (!q.empty())
	{
		cout << q.front();
		q.pop();
	}

	cout << ">";
	return 0;
}