#include<iostream>

using namespace std;

int a;

int main()
{
	int count = 0;

	cin >> a;

	while (a != 1)
	{
		if (a % 3 == 0)
		{
			a = a / 3;
		}
		else// if (a % 3 != 0)	//K�� 3�̶�� ����
		{
			a -= 1;
		}
		count++;
	}
	cout << count;

	return 0;
}


