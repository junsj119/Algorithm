#include <iostream>
#include <queue>
#include <vector>
#include<functional>
using namespace std;
/*
����� ���ؿ��
ť ����� ������ ���� �������� queue�� �ٸ��ٸ� ������ �������� queue�� ����
�� ť ��� ��������ʰ� ����top�� ������top���� ũ�� ���� �ٲ��ش�(��������� �����ϰ� switch)
���� queue top ���

BUT

�߾Ӱ� ���ϱ��
ù ���� ������ ���� ��
�� ���� �������� �������� ũ�� ������ �������� queue�� ����, ������ ���� �������� queue�� ����
�� �� ť ����� ���ϸ鼭 ������ ����� ũ��
left.push(median);	median = right.top();	right.pop();
���� ����� ũ��
right.push(median);	median = left.top();	left.pop();
*/

int main() {
	ios_base::sync_with_stdio(false); 
	cin.tie(NULL); 
	cout.tie(NULL);

	int n, num, val, median;

	cin >> n;

	for (int i = 0; i < n; i++) 
	{
		priority_queue<long long, vector<long long>> left;								//�߾Ӱ�>= �� �����ϴ� ��	ū������ ©��
		priority_queue<long long, vector<long long>, greater<long long>> right;			//�߾Ӱ�<= �� �����ϴ� ��	���������� ©��
		vector<int> v;

		cin >> num;

		for (int z = 0; z < num; z++) 
		{
			cin >> val;

			if (z == 0)
				median = val;
			else
			{
				if (median < val)
					right.push(val);
				else
					left.push(val);
			}

			if (z % 2 == 0)
			{
				if (right.size() > left.size())
				{
					left.push(median);
					median = right.top();
					right.pop();
				}
				else if (left.size() > right.size())
				{
					right.push(median);
					median = left.top();
					left.pop();
				}
				v.push_back(median);
			}			
		}

		cout << num / 2 + 1 << '\n';

		for (int x = 0; x < v.size(); x++) 
		{
			cout << v[x] << " ";

			if ((x + 1) % 10 == 0)
				cout << '\n';
		}
		cout << '\n';
	}
	return 0;
}