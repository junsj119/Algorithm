#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include<functional>

/*
7
4 60
4 40
1 20
2 50
3 30
4 10
6 5

185
*/
using namespace std;

int n, a, b;
int sum = 0;

priority_queue<int> pq;
vector<pair<int, int>> vec(100001);

int main()
{
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> a >> b;
		vec.push_back(make_pair(a, b));
	}

	sort(vec.begin(), vec.end(), greater<>());

	int day = vec[0].first;
	int idx = 0;

	/*
	6 - 6이면 점수 queue에 저장
	day 하나씩 깎아가면서 진행하는데 
	*/
	while (idx < n)			//n = 7
	{
		while (day == vec[idx].first)		
		{
			pq.push(vec[idx].second);
			idx++;
		}
		day--;

		if (pq.empty())
			continue;

		sum += pq.top();
		pq.pop();
	}

	// 아직 해당 과제를 수행하지 않았고, 과제의 마감일이 현재 날짜 안에 속한다면
	while (day--)
	{
		sum += pq.top();
		pq.pop();
	}


	cout << sum << "\n";
	return 0;
}
