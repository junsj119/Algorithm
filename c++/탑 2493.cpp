#include <iostream>
#include <stack>

using namespace std;

stack<pair<int, int> > st;  // pair<int, int> : index, height
int num, height[100001];

int main() {
	cin >> num;

	for (int i = 0; i < num; i++) {
		cin >> height[i];			// 6    9    5    7    4

		//수신탑 발견했을 때
		while (!st.empty()) {
			if (st.top().second > height[i]) { // s.top().second
				cout << st.top().first << " ";
				break;
			}
			//수신탑 찾을 때까지 계속 pop
			st.pop();
		}

		//수신 탑이 없다면
		if (st.empty()) {
			cout << 0 << " ";
		}

		//현재 높이를 스택에 푸쉬
		st.push(make_pair(i + 1, height[i]));
	}

	return 0;
}
