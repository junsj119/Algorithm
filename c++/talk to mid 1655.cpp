#include<iostream>
#include<queue>
#include<functional>

using namespace std;
//ex -> 10, 5, 9, 4, 2 �����ε�
/*
����� ������ ���� �������� queue�� �ٸ��ٸ� ������ �������� queue�� ����

�� ť ��� ��������ʰ� ����top�� ������top���� ũ�� ���� �ٲ��ش�(��������� �����ϰ� switch)

���� queue top ���
*/
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	priority_queue<long long, vector<long long>, greater<long long>> right;		//��������		���������� ©��
	priority_queue<long long> left;												//��������		ū������ ©��
	int n;

	cin >> n;

	while (n--) 
	{
		int a, size;
		cin >> a;
		
		if (left.size() == right.size()) 
			left.push(a);
 		else
			right.push(a);

		if (!left.empty() && !right.empty() && left.top() > right.top())	//�������� top�� �������� top���� ũ�� ���� �ٲ�����Ѵ�.
		{
			int max_val, min_val;
			max_val = left.top();
			min_val = right.top();
			left.pop();
			right.pop();
			left.push(min_val);
			right.push(max_val);
		}
		cout << left.top() << '\n';
	}
	return 0;
}