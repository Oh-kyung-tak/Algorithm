#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

vector<int> v[26];
int q;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	string word;
	cin >> word;

	for (int i = 0; i < word.size(); i++)
		v[word[i] - 'a'].push_back(i);

	cin >> q;

	while (q--)
	{
		char alpa;
		int l, r;
		cin >> alpa >> l >> r;

		auto it1 = lower_bound(v[alpa - 'a'].begin(), v[alpa - 'a'].end(), l);
		auto it2 = upper_bound(v[alpa - 'a'].begin(), v[alpa - 'a'].end(), r);
	
		cout << it2 - it1 << '\n';
	}
}