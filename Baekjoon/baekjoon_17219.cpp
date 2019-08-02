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

map<string, string> m;

int N, M;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	cin >> N >> M;

	for (int i = 0; i < N; i++)
	{
		string site, password;
		cin >> site >> password;
		m[site] = password;
	}

	for (int i = 0; i < M; i++)
	{
		string ss;
		cin >> ss;
		cout << m[ss] << '\n';
	}
}