#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>
#include <set>

using namespace std;

vector<string> v;
int N;
int len;
int cnt = 0;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		string temp;
		cin >> temp;
		v.push_back(temp);
	}

	len = v[0].size();

	while (1)
	{
		set<string> s;

		for (int i = 0; i < N; i++)
			s.insert(v[i].substr(len));
		
		if (s.size() == N)
			break;

		len--;
		cnt++;
	}

	cout << cnt << '\n';
}