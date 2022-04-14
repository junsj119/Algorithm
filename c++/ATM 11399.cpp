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

	int prev = 0;	//�������� ���ð� ������
	int sum = 0;	//����� ���ð� ����

	for (int i = 0; i < order; i++)
	{
		sum += prev + time[i];
		prev += time[i];
	}
	cout << sum;
}
