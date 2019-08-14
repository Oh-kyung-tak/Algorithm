#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <string>
#include <string.h>
#include <math.h>
#include <set>
#include <queue>

using namespace std;

int N;
int alpa[26];
int ans = 0;
int start = 9;
vector<int> alpa_num;

int main()
{
	cin >> N;

	
	for (int i = 0; i < N; i++)
	{
		string temp;
		cin >> temp;

		for (int j = 0; j < temp.size(); j++)
			alpa[temp[j] - 'A'] += (int)(pow(10, temp.size() - j - 1));
	}

	
	for (int i = 0; i < 26; i++)
	{
		if (alpa[i] != 0)
			alpa_num.push_back(alpa[i]);
	}

	sort(alpa_num.begin(), alpa_num.end(), greater<int>());

	for (int i = 0; i < alpa_num.size(); i++)
	{
		ans += start * alpa_num[i];
		start--;
	}

	cout << ans << endl;
}

