#include<iostream>
#include<algorithm>

using namespace std;

int arr[10];
int sum = 0;
int main()
{
	for (int i = 0; i < 9; i++) {
		cin >> arr[i];
		sum += arr[i];
	}

	sort(arr, arr + 9);

	for (int i = 0; i < 8; i++) {
		for (int j = 1; j < 9; j++) {
			if (sum - (arr[i] + arr[j]) == 100) {
				for (int k = 0; k < 9; k++)
				{
					if (k != i && k != j)
						cout << arr[k] << '\n';
				}
				return 0;
			}
		}
	}

}