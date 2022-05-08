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
		if (q.top() <= p[i].first)	//왜 .first() 가 크거나 같으면이냐    1~3 4~5이라고 가정했을 때  4시에 사작하는데 3시에 끝나봐라 그럼 2개를 쓸 필요가 없다. 그래서 원래 있던 q는 삭제
																		//1~3 2~5이라고 가정했을 때는 3시에 시작하는데 다음 강의가 2시에도 시작한다. 그럼 써야지.. 그래서 q에 추가! pop은 X
		{
			q.pop();				// 만약 3 3이거나 3 4이면 바로 이어서 할 수 있다 즉 강의실을 하나로 합치니깐 두개중 하나를 뺴줘야된다.
			q.push(p[i].second);
		}
		else
			q.push(p[i].second);
	}

	cout << q.size() << endl;
	
	return 0;
}