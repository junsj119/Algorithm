#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int arr[100001];
#define temp 2000000001
int main()
{
	int n;
	cin >> n;
	vector<int>vec(n);

	for (int i = 0; i < n; i++)
		cin >> vec[i];

	sort(vec.begin(), vec.end());

	int start = 0;
	int end = n - 1;
	int tmp = temp;

	while (start < end)
	{
		int sum = vec[start] + vec[end];
		if (tmp > abs(sum))		//-1 -2가 있으면 -1이 0에 더 가까운데 abs()를 안씌워주면 -2가 답이 되버린다.
		{
			tmp = abs(sum);
			arr[0] = start;
			arr[1] = end;

			if (sum == 0)
				break;
		}
		if (sum < 0)
			start++;
		else
			end--;
	}

	cout << arr[0] << " " << arr[1];

	return 0;
}