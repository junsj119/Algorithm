#include <iostream>

using namespace std;

int input;

int main() 
{
	cin >> input;

	int count = 0;

	while (input >= 0) 
	{
		if (input % 5 == 0) //���� ū ���� �����°� ���� �������� ��� ������ �ͺ��� ����
		{	
			count += (input / 5);	//���� ���� ���� ���� ����
			cout << count << endl;
			return 0;
		}
		input -= 3;	//3kg�� ���� 
		count++;	//���� �ϳ� �þ
	}
	cout << -1 << endl;
}
