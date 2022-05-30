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
		while (!st.empty() && st.top() <= input[i])		// 7-2	2-5 
			st.pop();

		if (st.empty())
			ans[i] = -1;
		else
			ans[i] = st.top();	// 5 7 7 -1

		st.push(input[i]);	// 7 2 5 3
	}

	//Ãâ·Â
	for (int i = 0; i < n; i++)
	{
		cout << ans[i];
	}

	return 0;
}