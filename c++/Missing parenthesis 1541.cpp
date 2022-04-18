#include <iostream> 
#include <string>
using namespace std; 

int main()
{ 
	string str; //입력한 문자열과 부호
	cin >> str;
	string temp = "";
	int result = 0;

	bool minus = false;

	for (int i = 0; i < str.size() + 1; i++)
	{
		if (str[i] == '+' || str[i] == '-'|| str[i] == '\0')
		{

			if (minus == true)
			{
				result -= stoi(temp);
			}
			else if (minus == false)
			{
				result += stoi(temp);
			}
			temp = "";
			if (str[i] == '-')
			{
				minus = true;
			}
		}
		else
		{
			temp += str[i];
		}
	}
	cout << result;

}