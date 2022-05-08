#include<iostream>
#include<queue>

using namespace std;

queue<int>q;
int arr[100001];
int n, length, weight;
int time = 0, total = 0;

int main()
{
	cin >> n >> length >> weight;

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	for (int i = 0; i < n; i++)
	{
		while (1)
		{
			if (q.size() == length)
			{
				total -= q.front();
				q.pop();
			}

			if (total + arr[i] >= weight)
			{
				q.push(0);
				time++;
			}
			else
				break;
		}
		q.push(arr[i]);
		total += arr[i];
		time++;
	}
	cout << time + length << "\n";

	return 0;
}