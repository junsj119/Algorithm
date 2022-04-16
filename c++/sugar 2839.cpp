#include <iostream>

using namespace std;

int input;

int main() 
{
	cin >> input;

	int count = 0;

	while (input >= 0) 
	{
		if (input % 5 == 0) //가장 큰 수로 나누는게 가장 작은수랑 섞어서 나누는 것보다 유리
		{	
			count += (input / 5);	//나눈 몫을 더한 것이 정답
			cout << count << endl;
			return 0;
		}
		input -= 3;	//3kg을 빼고 
		count++;	//가방 하나 늘어남
	}
	cout << -1 << endl;
}
