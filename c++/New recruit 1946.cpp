#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--) {
		int n;
		pair<int, int> p[100001];

		cin >> n;
		for (int i = 0; i < n; ++i) {
			cin >> p[i].first >> p[i].second;
		}

		sort(p, p + n);

		int ans = 1;
		int temp = p[0].second;
		for (int i = 1; i < n; ++i) {
			if (p[i].second < temp) {
				ans++;
				temp = p[i].second;

				if (temp == 1) {
					break;
				}
			}
		}
		cout << ans << '\n';
	}

	return 0;
}