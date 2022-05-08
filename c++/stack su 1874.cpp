#include <iostream>
#include <stack>
#include <vector>
using namespace std;

stack<int> st;
vector<char> ans;
int n;
int cur_num = 0;

/*
int main(void) {
	st.push(cur_num);
	cur_num++;

	cin >> n;			//8

	int num;
	bool valid = true;

	for (int i = 0; i < n; i++) {

		cin >> num;		//4 3 6 8 7 5 2 1

		// stack 의 top이 num과 같아질때까지 반복
		while (st.top() < num) {
			st.push(cur_num);
			cur_num++;
			ans.push_back('+');
		}

		if (st.top() == num) {
			st.pop();
			ans.push_back('-');
		}
		else {
			valid = false;
		}
	}

	if (!valid)
	{
		cout << "NO" << '\n';
	}
	else 
	{
		for (int i = 0; i < ans.size(); i++)
		{
			cout << ans[i] << '\n';
		}
	}

}
*/

int main()
{
	st.push(cur_num);
	cur_num++;

	cin >> n;

	int num = 0;
	bool b = true;
	for (int i = 0; i < n; i++)
	{
		cin >> num;
		
		while (st.top() < num)
		{
			st.push(cur_num);
			cur_num++;
			ans.push_back('+');
		}
		if (st.top() == num)
		{
			st.pop();
			ans.push_back('-');
		}
		else
			b = false;
	}

	if (!b)
		cout << "NO" << '\n';
	else
	{
		for (int i = 0; i < ans.size(); i++)
			cout << ans[i] << '\n';
	}
	return 0;
}