#include<iostream>
#include<stack>
#include<string>
#include<vector>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	string str;
	getline(cin, str);

	stack<char>st;
	vector<char>gar;

	for (int i = 0; i < str.length(); i++)
	{
		//문자들 공백 추가해줄 때 필요
		bool b = true;

		//태그 골라내기
		if (str[i] == '<')
		{
			vector<char>gar;
			while (gar.size() == 0 || gar.back() != '>')
			{
				gar.push_back(str[i]);
				i++;
			}
			i--;
			for (int i = 0; i < gar.size(); i++)
				cout << gar[i];	
		}
		else//단어 입력
		{
			while (st.size() == 0 || st.top() != ' ')
			{
				if (str.length() > i && str[i] != '<')
				{
					st.push(str[i]);
					i++;
				}
				else
					break;
			}
			i--;
			if (st.top() == ' ')
			{
				b = false;
				st.pop();
			}
			while (!st.empty())
			{
				cout << st.top();
				st.pop();
			}
			if (b == false)
				cout << " ";
		}
	}

	return 0;
}