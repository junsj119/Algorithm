#include<iostream>
#include<algorithm>

using namespace std;

int arr[100001];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); 
	cout.tie(NULL);

	int n, count = 0;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	int boss;
	cin >> boss;

	sort(arr, arr + n);

	int left = 0;
	int right = n - 1;

	while (left < right)
	{
		if (arr[left] + arr[right] == boss)
		{
			count++;
			right--;
		}
		else if (arr[left] + arr[right] > boss)
			right--;
		else
			left++;
	}

	cout << count;
	return 0;
}