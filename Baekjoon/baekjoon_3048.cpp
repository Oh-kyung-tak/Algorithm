#include <iostream>
#include <algorithm>
#include <math.h>
#include <queue>
#include <string.h>

using namespace std;

int n1, n2;
string w1, w2;
int T;
vector<pair<char, int>> v;

int main()
{
	cin >> n1 >> n2;
	cin >> w1 >> w2;
	cin >> T;

	reverse(w1.begin(), w1.end());

	for (int i = 0; i < w1.size(); i++)
		v.push_back({ w1[i], 1 });

	for (int i = 0; i < w2.size(); i++)
		v.push_back({ w2[i], 2 });


	while (T--)
	{
		for (int i = 0; i < v.size() - 1; i++)
		{
			// 다시 반대로 돌아오는 경우 예외처리
			if (v[i].second < v[i + 1].second)
			{
				swap(v[i], v[i + 1]);
				i++;
			}
		}
	}

	for (int i = 0; i < v.size(); i++)
		cout << v[i].first;
}