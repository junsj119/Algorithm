#include<iostream>

using namespace std;

int total;		//20 ������ 14, 17 ������ 11, 22 ������ 15
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
			else     //total�� 4�϶� ���� ( total 20����)
			{
				if (total < Rplay)
				{
					total--;
					for (; total >= 0; total--)		//total == �̰� ������ ����ü �� �������� ��
						count++;
				}
				else  //total > Rplay �϶�  -----> totla�� 22 �̸� 22 - 16 = 6  ---------->   total = 6 Rplay = 5
				{
					count += Rplay;
					total = -1;	//Rplay�� �־��ְ� while�� �����Ű��
				}
			}
		}
		cout << "Case " << cnt << ": " << count << endl;
		cnt++;
	}

	return 0;
}