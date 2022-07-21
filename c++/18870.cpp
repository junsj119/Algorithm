/*
중복된 수를 제거하고 정렬한 상태에서 lower_bound를 통해 나온 위치값이 압축 한 값이 됩니다.
*/

#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
/*
vector<int> v;로 선언되어있으면
cin >> input;
v.push_back(input); 로 넣어줘도 된다.

vector<int>vec(n);	 개수를 미리 선언해줬으면
cin >> vec[i]; 로 데이터를 삽입해줘도 된다.
*/
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, input;
	cin >> n;
	vector<int>vec;		//(n)하고 밑 for문으로 들어가면 n 만큼 앞자리가 000000으로 채워진다. 그리고 input을 하면 ㄴ000000 뒤부터 값이 들어간다.
	vector<int>copy;

	for (int i = 0; i < n; i++)
	{
		cin >> input;
		vec.push_back(input);
		copy.push_back(input);
	}

	sort(vec.begin(), vec.end());
	vec.erase(unique(vec.begin(), vec.end()), vec.end());	//중복값을 뒤로 다 밀고 삭제

	for (int i = 0; i < n; i++)
	{
		auto a = lower_bound(vec.begin(), vec.end(), copy[i]) - vec.begin();

		cout << a << " ";
	}

	
	return 0;
}