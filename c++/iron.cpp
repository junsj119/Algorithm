#include <iostream>
#include <string>
#include <stack>

using namespace std;

stack<char>st;
int total = 0;
int result = 0;

int main() {

	string str;
	cin >> str;	//��ȣ �Է�

	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == '(')
		{
			st.push('(');
		}
		else if (str[i] == ')' && str[i-1] == '(')	// �������϶�
		{
			st.pop();
			result += st.size();
		}
		else {										// ������ �������϶�
			result++;
			st.pop();
		}
	}
	cout << result << endl;
}