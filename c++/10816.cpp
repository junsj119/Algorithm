/*
upper_bound : 찾고자 하는 값의 다음 값이 최초로 나타나는 위치
lower_bound : 찾고자 하는 값 이상이 처음 나타나는 위치

즉, 1 2 4 4 6 7에서

lower_bound(~,~,4)의 결과 : 3 (4 이상의 값이 처음 나타나는 위치)
upper_bound(~,~,4)의 결과 : 5 (4를 초과하는 값이 처음 나타나는 위치)를 이용해서
사이의 값을 빼주면 2가 나오고 이것은 결국 저장된 4의 개수가 된다.

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
		//cout << lower_bound(vec.begin(), vec.end(), 2) - vec.begin;	이렇게는 된다.
	}

	return 0;
}