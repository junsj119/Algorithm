#include<iostream>
#include<algorithm>
using namespace std;

int cutCnt = 0, brandCnt = 0;

int Six[100001], One[100001];
int money = 0;

int main()
{
	cin >> cutCnt >> brandCnt;

	for (int i = 0; i < brandCnt; i++)
	{
		cin >> Six[i] >> One[i];

	}
	sort(Six, Six + brandCnt);
	sort(One, One + brandCnt);

	while (cutCnt != 0)
	{
		if (cutCnt >= 6)
		{
			money += Six[0];
			cutCnt -= 6;
		}
		else //5∞≥∫Œ≈Õ
		{
			money += One[0];
			cutCnt -= 1;
		}
	}
	cout << money << endl;
	return 0;
}