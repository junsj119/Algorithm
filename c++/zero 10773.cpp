#include<iostream>
#include<stack>

using namespace std;

stack<int>st;
int n = 0, num = 0, sum = 0;

int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> num;
		if (!st.empty() && num == 0)
		{
			st.pop();
		}
		else if (num != 0)
		{
			st.push(num);
		}
	}
	while (!st.empty())
	{
		sum += st.top();
		st.pop(); 
	}
	cout << sum << endl;
	return 0;
}