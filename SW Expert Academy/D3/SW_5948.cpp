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
		int num[8];
		bool n[301];
		memset(n, false, sizeof(n));

		for (int i = 1; i <= 7; i++)
			cin >> num[i];

		for(int i = 1; i <= 7; i++)
			for(int j = i + 1; j <= 7; j++)
				for (int k = j + 1; k <= 7; k++)
				{
					int t = num[i] + num[j] + num[k];
					if (!n[t])
					{
						v.push_back(t);
						n[t] = true;
					}
				}

		sort(v.begin(), v.end());

		cout << '#' << Test_case << " " << v[v.size() - 5] << endl;
		
	}
}