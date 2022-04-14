#include<iostream>
#include<algorithm>

using namespace std;

int order;
int time[100001];

int main()
{
	cin >> order;

	for (int i = 0; i < order; i++)
	{
		cin >> time[i];
	}

	sort(time, time + 5);

	int prev = 0;	//이전까지 대기시간 누적합
	int sum = 0;	//사람별 대기시간 총합

	for (int i = 0; i < order; i++)
	{
		sum += prev + time[i];
		prev += time[i];
	}
	cout << sum;
}
