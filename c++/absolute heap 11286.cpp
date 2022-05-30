#include<iostream>
#include<queue>
#include<functional>

using namespace std;

priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>>q;	//내림차순은 priority_queue<int>q;											
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

		//if (input < 0)
		//	input = ~input + 1;
		if (input == 0)
		{
			if (!q.empty())
			{
				cout << q.top().second << '\n';
				q.pop();
			}
			else
				cout << 0 << '\n';

		}
		else
			q.push({ abs(input), input });
	}

	return 0;
}