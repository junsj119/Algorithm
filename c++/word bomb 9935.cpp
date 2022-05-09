/*
1. �Է¹��� ���ڿ��� ��ȸ�ϸ鼭 �ϴ� ��� ���ڿ��� �߰��մϴ�.
2. ��ź ���ڿ��� ������ ���ڸ� �߰��ϸ� ��� ���ڿ� ���� ��ź�� �ִ��� Ȯ���ϰ� ��ź�� �ִٸ� �ε����� ��ź ���ڿ� ���̸�ŭ ���� ��ź�� �����մϴ�.
3. 2���� ��ģ �� �ε����� 0�̶�� ��ź���ڿ��θ� ������ ���ڿ��̿����Ƿ� "FRULA"�� ����ϰ� �ε����� 1 �̻��̶�� �ش� ���ڿ��� ����մϴ�.
*/

#include <iostream>
#include <string>

using namespace std;

string str, bomb;
char result[100001];
int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> str >> bomb;

	int idx = 0;
	for (int i = 0; i < str.length(); i++)
	{
		//�ϴ� �߰�
		result[idx] = str[i];
		idx++;
		//��ź���� �����Ǵ� �κ� ���ڿ� �߰�
		if (result[idx - 1] == bomb[bomb.length() - 1])
		{
			//���� ���
			if (idx - bomb.length() < 0)
				continue;
			//��ź ���� �ľ�
			bool detected = true;
			for (int j = 0; j < bomb.length(); j++)
				if (result[idx - j - 1] != bomb[bomb.length() - j - 1])	//�Ųٷ� ���鼭 ��ź�� �´��� Ȯ���ϱ�
				{
					detected = false;
					break;
				}
			//��ź ����
			if (detected)
				idx -= bomb.length();
		}
	}
	if (!idx)
		cout << "FRULA";
	else
	{
		for (int i = 0; i < idx; i++)
			cout << result[i];
	}
	return 0;
}
/*
#include<iostream>
#include<stack>
#include<string>

using namespace std;
stack<char>st;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string str, boom;

	cin >> str >> boom;

	for (int i = 0; i < str.length(); i++)
	{
		bool b = false;
		if (str[i] == boom[0])
		{
			int count = 0;

			for (int j = 0; j < boom.length(); j++)
			{
				if (str[i] != boom[j])
					break;
				else
				{
					count++;
					i++;
				}

				if (count == boom.length())
				{
					b = true;
					i = i - boom.length() + 1;
					break;
				}
			}
		}

		if (b == false)
		{
			cout << str[i];
		}
		
	}
	if (str.length() == 0)
		cout << "FRULA";
	else
	{
		for (int i = 0; i < str.length(); i++)
			cout << str[i];
	}
	return 0;
}*/