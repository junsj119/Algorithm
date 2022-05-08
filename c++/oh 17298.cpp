/*
#include<iostream>
#include<stack>

using namespace std;

stack<int>st;
int n;
int input[100001];
int ans[100001];

int main()
{
	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> input[i];		//3 5 2 7

	for (int i = n - 1; i >= 0; i--)
	{
		while (!st.empty() && st.top() <= input[i])
			st.pop();

		if (st.empty())
			ans[i] = -1;
		else
			ans[i] = st.top();	// 5 7 7 -1

		st.push(input[i]);						// 7 ------> 7, 2 ------> 7, 5 ------> 7, 5, 3
	}

	for (int i = 0; i < n; i++)
	{
		cout << ans[i];
	}

	return 0;
}
*/

#include<iostream>
#include<stack>

using namespace std;

int input[1000001];
int ans[1000001];
stack<int>st;
int n;
int main()
{
	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> input[i];

	for (int i = n - 1; i >= 0; i--)
	{
		while (!st.empty() && st.top() < input[i])
			st.pop();

		if (st.empty())
			ans[i] = -1;
		else
			ans[i] = st.top();

		st.push(input[i]);
	}

	for (int i = 0; i < n; i++)
	{
		cout << ans[i] << " ";
	}
	return 0;
}