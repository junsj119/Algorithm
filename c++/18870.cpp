/*
�ߺ��� ���� �����ϰ� ������ ���¿��� lower_bound�� ���� ���� ��ġ���� ���� �� ���� �˴ϴ�.
*/

#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
/*
vector<int> v;�� ����Ǿ�������
cin >> input;
v.push_back(input); �� �־��൵ �ȴ�.

vector<int>vec(n);	 ������ �̸� ������������
cin >> vec[i]; �� �����͸� �������൵ �ȴ�.
*/
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, input;
	cin >> n;
	vector<int>vec;		//(n)�ϰ� �� for������ ���� n ��ŭ ���ڸ��� 000000���� ä������. �׸��� input�� �ϸ� ��000000 �ں��� ���� ����.
	vector<int>copy;

	for (int i = 0; i < n; i++)
	{
		cin >> input;
		vec.push_back(input);
		copy.push_back(input);
	}

	sort(vec.begin(), vec.end());
	vec.erase(unique(vec.begin(), vec.end()), vec.end());	//�ߺ����� �ڷ� �� �а� ����

	for (int i = 0; i < n; i++)
	{
		auto a = lower_bound(vec.begin(), vec.end(), copy[i]) - vec.begin();

		cout << a << " ";
	}

	
	return 0;
}