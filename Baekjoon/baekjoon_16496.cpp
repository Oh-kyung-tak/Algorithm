#include <iostream>
#include <string>
#include <string.h>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <math.h>

using namespace std;

vector<string> v;
int N;

bool cmp(string s1, string s2)
{
	if (s1 + s2 > s2 + s1)
		return true;
	else
		return false;
}

int main()
{
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		string s;
		cin >> s;
		v.push_back(s);
	}

	sort(v.begin(), v.end(), cmp);

	if (v[0] == "0")
		cout << "0";
	else
	{
		for (int i = 0; i < v.size(); i++)
			cout << v[i];
	}
}