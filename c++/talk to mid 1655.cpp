#include<iostream>
#include<queue>
#include<functional>

using namespace std;
//ex -> 10, 5, 9, 4, 2 예제로도
/*
사이즈가 같으면 왼쪽 내림차순 queue에 다르다면 오른쪽 오름차순 queue에 저장

두 큐 모두 비어있지않고 왼쪽top이 오른쪽top보다 크면 서로 바꿔준다(변수에담고 삭제하고 switch)

왼쪽 queue top 출력
*/
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	priority_queue<long long, vector<long long>, greater<long long>> right;		//오름차순		작은수부터 짤려
	priority_queue<long long> left;												//내림차순		큰수부터 짤려
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

		if (!left.empty() && !right.empty() && left.top() > right.top())	//오름차순 top이 내림차순 top보다 크면 서로 바꿔줘야한다.
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