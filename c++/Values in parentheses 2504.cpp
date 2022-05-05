#include <iostream>
#include <stack>
#include <string>
#include <cmath>
using namespace std;

stack<char> st;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string input;
	cin >> input;

	long long result = 0;
	int temp = 1;
	bool b = true;

	for (int i = 0; i < input.size(); i++)
	{
		if (input[i] == '(')
		{
			temp *= 2;
			st.push(input[i]);
		}
		else if (input[i] == '[')
		{
			temp *= 3;
			st.push(input[i]);
		}
		else if (input[i] == ')' && (st.empty() || st.top() != '('))		//불가능
		{
			b = false;
			break;
		}
		else if (input[i] == ']' && (st.empty() || st.top() != '['))		//불가능
		{
			b = false;
			break;
		}
		else if (input[i] == ')')
		{
			if (input[i - 1] == '(')
				result += temp;

			st.pop();
			temp /= 2;
		}
		else if (input[i] == ']')
		{
			if (input[i - 1] == '[')
				result += temp;

			st.pop();
			temp /= 3;
		}
	}
	if (!b || !st.empty())
		cout << 0 << "\n";
	else
		cout << result << "\n";

	return 0;
}
