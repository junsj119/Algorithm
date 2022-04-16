#include<iostream>
#include<algorithm>

using namespace std;

int sensor = 0, N = 0;
int arr[100001];
int dist[100001];
int z = 0;
int sum = 0;

bool desc(int a, int b)
{
	return a > b;
}

int main()
{
	cin >> sensor >> N;

	for (int i = 0; i < sensor; i++)
	{
		cin >> arr[i];
	}

	sort(arr, arr + sensor);

	for (int i = 0; i < sensor - 1; i++)
	{
		dist[z] = arr[i + 1] - arr[i];
		z++;
	}

	sort(dist, dist + sensor - 1, desc);

	for (int i = 0; i < N - 1; i++)
	{
		dist[i] = 0;
	}

	for (int i = 0; i < sensor - 1; i++)
	{
		sum += dist[i];
	}
	cout << sum << endl;

	return 0;
}