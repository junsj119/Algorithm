#include<iostream>
#include<string>
#include<stack>

using namespace std;

int n;

int main()
{
	cin >> n;
	
	for (int i = 0; i < n; i++)
	{
		stack<char>st;
		string str;
		cin >> str;
		for (int j = 0; j < str.length(); j++)
		{
			if (st.empty() || str[j] == '(')	st.push(str[j]);
			else if (st.top() == '(')			st.pop();
		}
		if (st.empty())		cout << "YES" << endl;
		else                cout << "NO" << endl;
	}

	return 0;
}


/*
#include<iostream>
#include<string>
#include<stack>

using namespace std;

int main()
{
	int n;
	int one = 0, two = 0;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		stack<char>st;
		string str;
		cin >> str;

		for (int j = 0; j < str.length(); j++)
		{
			//if (st.empty() || str[j] == '(')	st.push(str[j]);
			//else if (st.top() == '(')			st.pop();
			if (str[j] == '(')
				one++;
			else
				two++;
		}
		if (one == two)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
		one = 0;
		two = 0;
		//if (st.empty())		cout << "YES" << endl;
		//else                cout << "NO" << endl;
	}

	return 0;
}
*/