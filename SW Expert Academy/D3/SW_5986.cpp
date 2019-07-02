#include <iostream>
#include <vector>
#include <string>
#include <string.h>
#include <algorithm>

using namespace std;

int T;
bool suso[1001];
vector<int> v;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); 
	cout.tie(NULL);

	for (int i = 2; i <= sqrt(1000); i++)
	{
		if (!suso[i])
		{
			for (int j = i * i; j <= 1000; j += i)
				suso[j] = true;
		}
	}

	for (int i = 2; i <= 999; i++)
		if (!suso[i])
			v.push_back(i);

	cin >> T;

	for (int Test_case = 1; Test_case <= T; Test_case++)
	{
		int N;
		int cnt = 0;
		cin >> N;

		for (int i = 0; i < v.size(); i++)
			for (int j = i; j < v.size(); j++)
			{
				if (N - (v[i] + v[j]) < 0)
					break;
				else
				{
					if (N - (v[i] + v[j]) >= v[j] && !suso[N - (v[i] + v[j])])
						cnt++;
				}
			}
				
					
		cout << '#' << Test_case << " " << cnt << endl;
	}
}