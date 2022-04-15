#include<iostream>

using namespace std;

int pay;
int a = 1000, b;

int main()
{
	int count = 0;

	cin >> pay;
	b = a - pay;

	int coin[6] = { 500, 100, 50, 10, 5, 1};

	 for (int i = 0; i < (sizeof(coin)/sizeof(*coin)); i++)
	 {
		 while (b >= coin[i])
		 {
			 b -= coin[i];
			 count++;
		 }
	 }
	 cout << count;

}