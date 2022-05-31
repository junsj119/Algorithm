#include <iostream>
#include <queue>
#include <vector>
#include<functional>
using namespace std;
/*
가운데를 말해요는
큐 사이즈가 같으면 왼쪽 내림차순 queue에 다르다면 오른쪽 오름차순 queue에 저장
두 큐 모두 비어있지않고 왼쪽top이 오른쪽top보다 크면 서로 바꿔준다(변수에담고 삭제하고 switch)
왼쪽 queue top 출력

BUT

중앙값 구하기는
첫 값을 변수에 저장 후
그 변수 기준으로 변수보다 크면 오른쪽 오름차순 queue에 저장, 작으면 왼쪽 내림차순 queue에 저장
그 후 큐 사이즈를 비교하면서 오른쪽 사이즈가 크면
left.push(median);	median = right.top();	right.pop();
왼쪽 사이즈가 크면
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
		priority_queue<long long, vector<long long>> left;								//중앙값>= 를 만족하는 수	큰수부터 짤림
		priority_queue<long long, vector<long long>, greater<long long>> right;			//중앙값<= 를 만족하는 수	작은수부터 짤림
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