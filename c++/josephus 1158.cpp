#include<iostream>
#include<queue>

using namespace std;

queue<int>q;
int n, k, tmp;

int main()
{
	cin >> n >> k;

	for (int i = 1; i < n + 1; i++)
	{
		q.push(i);
	}

	cout << "<";

	while (q.size() > 1)
	{
		for (int i = 0; i < k - 1; i++)	//3 �Է½� 0, 1 ���ݺ�
		{
			tmp = q.front();
			q.push(tmp);
			q.pop();
		}

		tmp = q.front();
		cout << tmp << ", ";
		q.pop();
	}

	tmp = q.front();
	cout << tmp << ">";

	return 0;
}