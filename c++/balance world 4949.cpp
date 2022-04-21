#include<iostream>
#include<string>
#include<stack>
using namespace std;

string str;

int main()
{
	while (1)
	{
		getline(cin, str);
		stack<char> st;

		if (str[0] == '.') break;		//str[0] ��� str �غ���

		for (int i = 0; i < str.length() - 1; i++)
		{
			if (str[i] == '(') st.push('(');
			if (str[i] == '[') st.push('[');

			if (str[i] == ']')
			{
				if (!st.empty() && st.top() == '[') 
					st.pop();
				else 
				{ 
					printf("no\n"); 
					break;
				}
			}

			if (str[i] == ')')
			{
				if (!st.empty() && st.top() == '(')
					st.pop();
				else 
				{ 
					printf("no\n");
					break;
				} 
			}

			if (st.empty() && i == str.length() - 2)		//()[]. �ϋ� ���̴� 5 ---> �˻縦 �� ������ 0 1 2 3 ���ϱ� i�� 3   5 - 2 = 3
				printf("yes\n");
			else if (!st.empty() && i == str.length() - 2)
				printf("no\n");

		}

	}
}