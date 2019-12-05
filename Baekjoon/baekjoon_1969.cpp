#include <string>
#include <vector>
#include <set>
#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

vector<string> v;
int N, C;
int sum = 0;
string ans;

int main()
{
	cin >> N >> C;

	for (int i = 0; i < N; i++)
	{
		string temp;
		cin >> temp;
		v.push_back(temp);
	}

	for (int i = 0; i < C; i++)
	{
		int alpa[4] = { 0,0,0,0 };
		int max_num = 0;

		for (int j = 0; j < N; j++)
		{
			if (v[j][i] == 'A')
				alpa[0]++;
			else if (v[j][i] == 'C')
				alpa[1]++;
			else if (v[j][i] == 'G')
				alpa[2]++;
			else
				alpa[3]++;
		}
		max_num = max({ alpa[0], alpa[1], alpa[2], alpa[3] });

		if (alpa[0] == max_num)
			ans += 'A';
		else if (alpa[1] == max_num)
			ans += 'C';
		else if (alpa[2] == max_num)
			ans += 'G';
		else
			ans += 'T';
		
		sum += N - max_num;
	}

	cout << ans << endl;
	cout << sum << endl;
}