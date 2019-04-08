#include<iostream>
#include<algorithm>
#include<string>
#include<vector>

using namespace std;

int T;

int main()
{
	scanf("%d", &T);

	while (T--)
	{
		int N;
		string school;
		int maxal = -1;

		vector<pair<string, int>>v;

		scanf("%d", &N);

		for (int i = 0; i < N; i++)
		{
			string s;
			int num;
			cin >> s >> num;

			v.push_back(make_pair(s, num));
		}
	
		for (int i = 0; i < v.size(); i++)
		{
			if (v[i].second > maxal)
			{
				maxal = v[i].second;
				school = v[i].first;
			}
		}

		cout << school << endl;
	}
}
	

	
