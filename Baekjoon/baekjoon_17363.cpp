#include <iostream>
#include <string>
#include <string.h>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <queue>
#include <stack>

using namespace std;
int N;
char milk[101][101];

int main()
{
	int N, M;
	cin >> N >> M;

	for (int i = 1; i <= N; i++)
		for (int j = 1; j <= M; j++)
			cin >> milk[i][j];


	for (int i = M; i >= 1; i--)
	{
		for (int j = 1; j <= N; j++)
		{
			if (milk[j][i] == '-')
				cout << '|';
			else if (milk[j][i] == '|')
				cout << "-";
			else if (milk[j][i] == '/')
				cout << "\\";
			else if (milk[j][i] == '\\')
				cout << "/";
			else if (milk[j][i] == '^')
				cout << "<";
			else if (milk[j][i] == '<')
				cout << "v";
			else if (milk[j][i] == 'v')
				cout << ">";
			else if (milk[j][i] == '>')
				cout << "^";
			else
				cout << milk[j][i];
		}
		cout << endl;
	}
		
}