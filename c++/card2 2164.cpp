#include<iostream>
#include<queue>

using namespace std;

queue<int>q;
int n;

int main()
{
	cin >> n;

	for (int i = 1; i < n + 1; i++)
		q.push(i);

	while (q.size() != 1)
	{
		int tmp;

		q.pop();

		tmp = q.front();
		q.pop();
		q.push(tmp);
	}
	cout << q.front();

	return 0;
}