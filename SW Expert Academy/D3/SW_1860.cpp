#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>

using namespace std;
int T, test_case;

int main(int argc, char** argv)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> T;

	for (test_case = 0; test_case < T; test_case++)
	{
		vector<int> v;
		int N, M, K;
		int bang[11112];
		bool ck = true;
		int cnt = 0;

		bang[0] = 0;

		cin >> N >> M >> K;

		for (int i = 0; i < N; i++)
		{
			int temp;
			cin >> temp;
			v.push_back(temp);
		}

		sort(v.begin(), v.end());

		for (int i = 1; i <= v[v.size() - 1]; i++)
		{
			if (i % M == 0)
				bang[i] = bang[i - 1] + K;
			else
				bang[i] = bang[i - 1];
		}
	
		for (int i = 0; i < v.size(); i++)
		{
			if (bang[v[i]] - cnt > 0)
				cnt++;
			else
			{
				ck = false;
				break;
			}
		}

		cout << "#" << test_case + 1 << " ";
		if (ck == true)
			cout << "Possible" << endl;
		else
			cout << "Impossible" << endl;
	}

	return 0;
}