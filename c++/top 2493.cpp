#include <iostream>
#include <stack>

using namespace std;

stack<pair<int, int> > st;  // pair<int, int> : index, height
int num, height[100001];

int main() {
	cin >> num;

	for (int i = 0; i < num; i++) {
		cin >> height[i];			// 6    9    5    7    4

		//����ž �߰����� ��
		while (!st.empty()) {
			if (st.top().second > height[i]) { // s.top().second
				cout << st.top().first << " ";
				break;
			}
			//����ž ã�� ������ ��� pop
			st.pop();
		}

		//���� ž�� ���ٸ�
		if (st.empty()) {
			cout << 0 << " ";
		}

		//���� ���̸� ���ÿ� Ǫ��
		st.push(make_pair(i + 1, height[i]));
	}

	return 0;
}
