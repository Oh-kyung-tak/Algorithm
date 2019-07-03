#include <iostream>
#include <vector>
#include <string>
#include <string.h>
#include <algorithm>
#include <set>
#include <map>

using namespace std;

int T;
int day[5001];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); 
	cout.tie(NULL);

	cin >> T;

	for (int Test_case = 1; Test_case <= T; Test_case++)
	{
		vector<int> v;
		int N;

		cin >> N;
		for (int i = 0; i < N; i++)
			cin >> day[i];

		v.push_back(day[1] - 1);

		for (int i = 2; i < N; i++)
		{
			bool ck = false;

			for (int j = 0; j < v.size(); j++)
			{
				if (((day[i] - 1) % v[j]) == 0)
				{
					ck = true;
					break;
				}
			}

			if (ck == false)
				v.push_back(day[i] - 1);
		}

		cout << "#" << Test_case << " " << v.size() << endl;

	}
}