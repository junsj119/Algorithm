#include<iostream>

using namespace std;
int n;
int coin[100001];
int sum;

int main()
{
	int count = 0;

	cin >> n >> sum;
	for (int i = 0; i < n; i++)
		cin >> coin[i];

	while (sum != 0)
	{
		for (int i = n-1; i >= 0; i--)
		{
			if (coin[i] <= sum)
			{
				while (sum >= coin[i])	//1000보다 낮아질때까지 계속 빼준다
				{
					sum -= coin[i];
					count++;
				}
			}
		}
	}
	cout << count;
	return 0;
}