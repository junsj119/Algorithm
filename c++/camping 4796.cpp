#include<iostream>

using namespace std;

int total;		//20 넣으면 14, 17 넣으면 11, 22 넣으면 15
int play;
int Rplay;
int cnt = 1;

int main()
{
	while (1)
	{
		int count = 0;
		cin >> Rplay >> play >> total;

		if (Rplay == 0 && play == 0 && total == 0)
			break;

		while (total != -1)
		{
			if (total > play)  //total != 0 && 
			{
				total -= play;
				count += Rplay;
			}
			else     //total이 4일때 들어간다 ( total 20기준)
			{
				if (total < Rplay)
				{
					total--;
					for (; total >= 0; total--)		//total == 이거 넣으면 도대체 왜 터지는지 참
						count++;
				}
				else  //total > Rplay 일때  -----> totla이 22 이면 22 - 16 = 6  ---------->   total = 6 Rplay = 5
				{
					count += Rplay;
					total = -1;	//Rplay값 넣어주고 while문 종료시키기
				}
			}
		}
		cout << "Case " << cnt << ": " << count << endl;
		cnt++;
	}

	return 0;
}