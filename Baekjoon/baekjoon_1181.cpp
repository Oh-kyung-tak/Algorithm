#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <string>

using namespace std;

vector<string> v;
map<string, bool> m;
int N;

bool cmp(const string &a, const string &b)
{
	if (a.size() == b.size())
		return a < b;

	return a.size() < b.size();
}

int main()
{
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		string word;
		cin >> word;

		if (m[word] == false)
		{
			m[word] = true;
			v.push_back(word);
		}
	}

	sort(v.begin(), v.end(), cmp);

	for (int i = 0; i < v.size(); i++)
		cout << v[i] << endl;
}
