#include<iostream>
#include<queue>
#include<functional>

using namespace std;

priority_queue<int>q;		//오름차순은 priority_queue<int, vector<int>, greater<int>>q 로 선언
int n;
int input;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> input;

		if (input == 0)
		{
			if (!q.empty())
			{
				cout << q.top() << '\n';
				q.pop();
			}
			else
				cout << 0 << '\n';

		}
		else if (n > 0)
			q.push(input);
	}

	return 0;
}