/*
#include<iostream>
#include<string>
#include<stack>
using namespace std;

int main() {

	string str; //�ʱ� �Է� ���ڿ�
	cin >> str; //abcd

	int n;
	cin >> n;

	stack<char> s1, s2;

	for (int i = 0; i < str.length(); i++)
		s1.push(str[i]);

	// s1.end() Ŀ���� ��ġ  
	while (n--) {// ����� �� ��ŭ �ݺ� 
		char cmd;
		cin >> cmd; //��ɾ� �Է� 

		if (cmd == 'L') {
			if (!(s1.empty())) {
				//s1�� ��� ���� == Ŀ���� ���� �����̴�  
				s2.push(s1.top());
				s1.pop();
			}

		}
		else if (cmd == 'D') {
			if (!s2.empty()) {
				// s2�� ��� ���� == Ŀ���� ���� �������̴�  
				s1.push(s2.top());
				s2.pop();
			}
		}
		else if (cmd == 'B') {
			if (!(s1.empty())) {
				s1.pop();
			}

		}
		else if (cmd == 'P') {
			char x;
			cin >> x;
			s1.push(x);
		}
	}
	// ó������ ������� ����ϱ� ���� s1 ���ÿ��� s2 �������� �ű��. 
	while (!(s1.empty())) {
		s2.push(s1.top());
		s1.pop();
	}
	// s1���� �߰��� �� ���������� ����ϰ� ��µ� �Ŀ� ���ÿ��� ����  
	while (!(s2.empty())) {
		cout << s2.top();
		s2.pop();
	}
	return 0;
}*/

/////////////////////////////////////////////////////////////////////////////List�� �̿��� Ǯ��//////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
#include<string>
#include<list>
using namespace std;

int main() {
	int n;
	string s; //�ʱ� �Է� ���ڿ�

	cin >> s; //abcd
	cin >> n;

	list<char> editor(s.begin(), s.end()); // ���ڿ��� ����Ʈ��  
	auto cursor = editor.end(); // �ʱ� Ŀ���� ��ġ�� ������ �� ��

	while (n--) {// ����� �� ��ŭ �ݺ� 
		char cmd;
		cin >> cmd; //��ɾ� �Է� 

		if (cmd == 'L') {
			if (cursor != editor.begin()) {
				cursor--;
			}
		}
		else if (cmd == 'D') {
			if (cursor != editor.end()) {
				cursor++;
			}
		}
		else if (cmd == 'B') {
			if (cursor != editor.begin()) {
				cursor--;
				editor.erase(cursor);
				cursor++;
			}
		}
		else if (cmd == 'P') {
			char x;
			cin >> x;
			editor.insert(cursor, x);
		}
	}
	for (auto &x : editor) {
		cout << x;
	}
	return 0;
}
