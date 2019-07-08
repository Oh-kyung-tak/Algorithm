#include <iostream>
#include <vector>
#include <string>
#include <string.h>
#include <algorithm>
#include <set>
#include <map>
#include <queue>

using namespace std;

int T;
bool mem[1000001];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> T;

	for (int Test_case = 1; Test_case <= T; Test_case++)
	{
		vector<string> v;
		int N, M;
		int cnt = 0;
		cin >> N >> M;

		for (int i = 0; i < N; i++)
		{
			string word;
			cin >> word;
			v.push_back(word);
		}

		sort(v.begin(), v.end());

		for (int i = 0; i < M; i++)
		{
			string word;
			cin >> word;
			if (binary_search(v.begin(), v.end(), word))
				cnt++;
		}
		cout << "#" << Test_case << " " << cnt << endl;
	}
}