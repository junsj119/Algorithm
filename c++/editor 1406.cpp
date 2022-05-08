/*
#include<iostream>
#include<string>
#include<stack>
using namespace std;

int main() {

	string str; //초기 입력 문자열
	cin >> str; //abcd

	int n;
	cin >> n;

	stack<char> s1, s2;

	for (int i = 0; i < str.length(); i++)
		s1.push(str[i]);

	// s1.end() 커서의 위치  
	while (n--) {// 명령의 수 만큼 반복 
		char cmd;
		cin >> cmd; //명령어 입력 

		if (cmd == 'L') {
			if (!(s1.empty())) {
				//s1에 든게 없다 == 커서가 가장 왼쪽이다  
				s2.push(s1.top());
				s1.pop();
			}

		}
		else if (cmd == 'D') {
			if (!s2.empty()) {
				// s2에 든게 없다 == 커서가 가장 오른쪽이다  
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
	// 처음부터 순서대로 출력하기 위해 s1 스택에서 s2 스택으로 옮긴다. 
	while (!(s1.empty())) {
		s2.push(s1.top());
		s1.pop();
	}
	// s1에서 추가된 맨 위에서부터 출력하고 출력된 후에 스택에서 삭제  
	while (!(s2.empty())) {
		cout << s2.top();
		s2.pop();
	}
	return 0;
}*/

/////////////////////////////////////////////////////////////////////////////List를 이용한 풀이//////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
#include<string>
#include<list>
using namespace std;

int main() {
	int n;
	string s; //초기 입력 문자열

	cin >> s; //abcd
	cin >> n;

	list<char> editor(s.begin(), s.end()); // 문자열을 리스트로  
	auto cursor = editor.end(); // 초기 커서의 위치는 문장의 맨 뒤

	while (n--) {// 명령의 수 만큼 반복 
		char cmd;
		cin >> cmd; //명령어 입력 

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
