#include <string>
#include <vector>
#include <iostream>
#include <queue>
using namespace std;

int T;

int main()
{
	cin >> T;

	while (T--)
	{
		int N, M;
		string min;
		string max;
		int min_int;
		int max_int;
		int cnt = 0;
		vector<string> v;

		cin >> N >> M;

		for (int i = 0; i < M; i++)
		{
			string tt;
			cin >> tt;
			min += tt;
		}
		min_int = stoi(min);

		for (int i = 0; i < M; i++)
		{
			string tt;
			cin >> tt;
			max += tt;
		}
		max_int = stoi(max);

		for (int i = 0; i < N; i++)
		{
			string tt;
			cin >> tt;
			v.push_back(tt);
		}

		for (int i = 0; i < N; i++)
		{
			string tt;
			for (int j = 0; j < M; j++)
				tt += v[j];

			v.push_back(v[0]);
			v.erase(v.begin());

			if (min_int <= stoi(tt) && max_int >= stoi(tt))
				cnt++;
		}

		cout << cnt << endl;
	}
}