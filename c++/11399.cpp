#include<iostream>
#include<algorithm>

using namespace std;

int order;
int time[100001];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> order;

	for (int i = 0; i < order; i++)
	{
		cin >> time[i];
	}

	sort(time, time + order);

	int prev = 0;	//�������� ���ð� ������
	int sum = 0;	//����� ���ð� ����

	for (int i = 0; i < order; i++)
	{
		sum += prev + time[i];
		prev += time[i];
	}
	cout << sum;
}