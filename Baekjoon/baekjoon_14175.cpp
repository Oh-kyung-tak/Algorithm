#include <string>
#include <vector>
#include <iostream>
#include <queue>
using namespace std;

int M, N, cnt;
char map[11][11];
vector<string> v;
int main()
{
	cin >> M >> N >> cnt;

	for (int i = 1; i <= M; i++)
		for (int j = 1; j <= N; j++)
			cin >> map[i][j];

	for (int i = 1; i <= M; i++)
	{
		string temp;
		for (int j = 1; j <= N; j++)
		{
			for (int k = 1; k <= cnt; k++)
				temp += map[i][j];
		}
		v.push_back(temp);
	}

	for (int i = 0; i < v.size(); i++)
	{
		for (int j = 1; j <= cnt; j++)
			cout << v[i] << endl;
	}
}