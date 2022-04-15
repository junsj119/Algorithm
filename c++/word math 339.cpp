#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
int graph[26];

//내림차순
bool desc(int a, int b) {
	return a > b;
}


int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string input;
		cin >> input;
		int pow = 1;
		for (int j = input.length() - 1; j >= 0; j--) {
			graph[input[j] - 'A'] += pow;
			pow *= 10;
		}
	}

	sort(graph, graph + 26, desc);

	int num = 9;
	int answer = 0;
	for (int i = 0; i < 26; i++) {
		if (graph[i] == 0)
			break;
		answer += graph[i] * num--;
	}
	cout << answer << '\n';

	return 0;
}

/*
int main()
{
	int graph[26];

	int amount;
	cin >> amount;

	for (int i = 0; i < amount; i++)
	{
		string input;
		cin >> input;

		int pow = 1;
		int ans;
		for (int a = input.length(); a >= 0; a--)
		{			
			graph[input[a] - 'A'] += pow;	
			pow *= 10;
		}
	}

	sort(graph, graph + 26);

	int num = 9;
	int answer = 0;
	for (int i = 0; i < 26; i++) {
		if (graph[i] == 0)
			break;
		answer += graph[i] * num;
		num--;
	}
	cout << answer << '\n';

	return 0;
}
*/