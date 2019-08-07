#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <string>
#include <string.h>
#include <math.h>
#include <set>

using namespace std;

int N, M;
int chicken[31][31];
vector<int> v;
int ans = 0;

int main()
{
	cin >> N >> M;

	for (int i = 1; i <= N; i++)
		for (int j = 1; j <= M; j++)
			cin >> chicken[i][j];

	for (int i = 0; i < M; i++)
	{
		if (i < M - 3)
			v.push_back(0);
		else
			v.push_back(1);
	}

	do
	{
		vector<int> t;
		int sum = 0;

		for (int i = 0; i < M; i++)
		{
			if (v[i] == 1)
				t.push_back(i + 1);
		}
		
		for (int i = 1; i <= N; i++)
		{
			int max_n = -1;
			for (int j = 0; j < t.size(); j++)
				max_n = max(max_n, chicken[i][t[j]]);
			sum += max_n;
		}
		
		ans = max(ans, sum);

	} while (next_permutation(v.begin(), v.end()));
	
	cout << ans << endl;
}

