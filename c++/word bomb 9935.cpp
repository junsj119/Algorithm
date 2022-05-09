/*
1. 입력받은 문자열을 순회하면서 일단 결과 문자열에 추가합니다.
2. 폭탄 문자열의 마지막 문자를 발견하면 결과 문자열 끝에 폭탄이 있는지 확인하고 폭탄이 있다면 인덱스를 폭탄 문자열 길이만큼 빼서 폭탄을 제거합니다.
3. 2번을 마친 후 인덱스가 0이라면 폭탄문자열로만 구성된 문자열이였으므로 "FRULA"를 출력하고 인덱스가 1 이상이라면 해당 문자열을 출력합니다.
*/

#include <iostream>
#include <string>

using namespace std;

string str, bomb;
char result[100001];
int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> str >> bomb;

	int idx = 0;
	for (int i = 0; i < str.length(); i++)
	{
		//일단 추가
		result[idx] = str[i];
		idx++;
		//폭탄으로 추정되는 부분 문자열 발견
		if (result[idx - 1] == bomb[bomb.length() - 1])
		{
			//기저 사례
			if (idx - bomb.length() < 0)
				continue;
			//폭탄 여부 파악
			bool detected = true;
			for (int j = 0; j < bomb.length(); j++)
				if (result[idx - j - 1] != bomb[bomb.length() - j - 1])	//거꾸로 들어가면서 폭탄이 맞는지 확인하기
				{
					detected = false;
					break;
				}
			//폭탄 제거
			if (detected)
				idx -= bomb.length();
		}
	}
	if (!idx)
		cout << "FRULA";
	else
	{
		for (int i = 0; i < idx; i++)
			cout << result[i];
	}
	return 0;
}
/*
#include<iostream>
#include<stack>
#include<string>

using namespace std;
stack<char>st;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string str, boom;

	cin >> str >> boom;

	for (int i = 0; i < str.length(); i++)
	{
		bool b = false;
		if (str[i] == boom[0])
		{
			int count = 0;

			for (int j = 0; j < boom.length(); j++)
			{
				if (str[i] != boom[j])
					break;
				else
				{
					count++;
					i++;
				}

				if (count == boom.length())
				{
					b = true;
					i = i - boom.length() + 1;
					break;
				}
			}
		}

		if (b == false)
		{
			cout << str[i];
		}
		
	}
	if (str.length() == 0)
		cout << "FRULA";
	else
	{
		for (int i = 0; i < str.length(); i++)
			cout << str[i];
	}
	return 0;
}*/