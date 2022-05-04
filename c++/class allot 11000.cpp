#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include<functional>

/*
@@example@@
6
1 5
2 3
3 6
4 5
5 6
6 7
*/
using namespace std;
int n;
pair<int, int>p[1000001];
priority_queue<int, vector<int>, greater<int>>q;

int main()
{
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> p[i].first >> p[i].second;
	}

	sort(p, p + n);

	q.push(p[0].second);

	for (int i = 1; i < n; i++)
	{
		if (q.top() <= p[i].first)	//�� .first() �� ũ�ų� �������̳�    1~3 4~5�̶�� �������� ��  4�ÿ� �����ϴµ� 3�ÿ� �������� �׷� 2���� �� �ʿ䰡 ����. �׷��� ���� �ִ� q�� ����
																		//1~3 2~5�̶�� �������� ���� 3�ÿ� �����ϴµ� ���� ���ǰ� 2�ÿ��� �����Ѵ�. �׷� �����.. �׷��� q�� �߰�! pop�� X
		{
			q.pop();				// ���� 3 3�̰ų� 3 4�̸� �ٷ� �̾ �� �� �ִ� �� ���ǽ��� �ϳ��� ��ġ�ϱ� �ΰ��� �ϳ��� ����ߵȴ�.
			q.push(p[i].second);
		}
		else
			q.push(p[i].second);
	}

	cout << q.size() << endl;
	
	return 0;
}