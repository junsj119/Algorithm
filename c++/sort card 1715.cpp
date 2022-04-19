#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int card[100001];

int main()
{
	int n, input = 0;
	cin >> n;

	//	int card[4] = { 20, 40, 10, 50 };

	for (int i = 0; i < n; i++)
	{
		cin >> card[i];
	}

	int chang = 0, sum = 0;

	sort(card, card + n);	//10, 20, 40, 50

	for (int j = 0; j < n; j++)	//0, 1, 2
	{
		sum += chang + card[j];
		chang = chang + card[j];
	}
	sum -= card[0];

	cout << sum;

	return 0;
}