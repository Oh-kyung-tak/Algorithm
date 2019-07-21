#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <queue>
#include <string.h>
#include <math.h>
#include <set>
#include <map>

using namespace std;

int N, M;
map<string, int> m;
vector<string> v;

int main()
{
	cin.tie(NULL);
	ios::ios_base::sync_with_stdio(false);
	cin >> N >> M;
	v.push_back("null");

	for (int i = 0; i < N; i++)
	{
		string pokemon;
		cin >> pokemon;
		v.push_back(pokemon);
		m[pokemon] = i + 1;
	}

	for (int i = 0; i < M; i++)
	{
		string word;
		cin >> word;

		if (word[0] >= '0' && word[0] <= '9')
		{
			int num = stoi(word);
			cout << v[num] << '\n';
		}
		else
		{
			map<string, int>::iterator iter = m.find(word);
			cout << (*iter).second << '\n';
		}
	}
}