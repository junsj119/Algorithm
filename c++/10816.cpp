/*
upper_bound : ã���� �ϴ� ���� ���� ���� ���ʷ� ��Ÿ���� ��ġ
lower_bound : ã���� �ϴ� �� �̻��� ó�� ��Ÿ���� ��ġ

��, 1 2 4 4 6 7����

lower_bound(~,~,4)�� ��� : 3 (4 �̻��� ���� ó�� ��Ÿ���� ��ġ)
upper_bound(~,~,4)�� ��� : 5 (4�� �ʰ��ϴ� ���� ó�� ��Ÿ���� ��ġ)�� �̿��ؼ�
������ ���� ���ָ� 2�� ������ �̰��� �ᱹ ����� 4�� ������ �ȴ�.

*/
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int n, m, num;
int q;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;
	vector<int>vec(n);

	for (int i = 0; i < n; i++)
		cin >> vec[i];
	
	sort(vec.begin(), vec.end());

	cin >> m;
	for (int i = 0; i < m; i++)
	{
		cin >> num;
		auto a = lower_bound(vec.begin(), vec.end(), num) - vec.begin();
		auto b = upper_bound(vec.begin(), vec.end(), num) - vec.begin();

		cout << b - a << " ";
		//cout << lower_bound(vec.begin(), vec.end(), 2) - vec.begin;	�̷��Դ� �ȴ�.
	}

	return 0;
}