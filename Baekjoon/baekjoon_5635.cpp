#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <string>
#include <math.h>
#include <set>

using namespace std;

struct birth {
	string word;
	int year;
	int month;
	int day;
};

vector<birth> v;
int N;

bool cmp(birth a, birth b)
{
	if (a.year == b.year)
	{
		if (a.month == b.month)
		{
			return a.day < b.day;
		}
		else
			return a.month < b.month;
	}
	else
		return a.year < b.year;
}

int main()
{
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		string word;
		int y, m, d;
		cin >> word >> d >> m >> y;
		v.push_back({ word, y , m , d });
	}

	sort(v.begin(), v.end(), cmp);

	cout << v[N - 1].word << endl;
	cout << v[0].word << endl;
}

