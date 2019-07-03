#include <iostream>
#include <vector>
#include <string>
#include <string.h>
#include <algorithm>
#include <set>
#include <map>

using namespace std;

int T;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); 
	cout.tie(NULL);

	cin >> T;

	for (int Test_case = 1; Test_case <= T; Test_case++)
	{
		vector<int> v;
		int score = 0;

		int N, K;
		cin >> N >> K;

		for (int i = 0; i < N; i++)
		{
			int temp;
			cin >> temp;
			v.push_back(temp);
		}

		sort(v.begin(), v.end());

		int last = v.size() - K;
		
		for (int i = v.size() - 1; i >= last; i--)
			score += v[i];

		cout << "#" << Test_case << " " << score << endl;

	}
}