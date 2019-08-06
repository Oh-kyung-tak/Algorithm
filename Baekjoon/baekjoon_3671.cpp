#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <string>
#include <string.h>
#include <math.h>
#include <set>

using namespace std;

bool suso[10000000];
bool visited[8];
int N;
set<int> se;
string temp;

void check(string s)
{
	if (!suso[stoi(s)])
		se.insert(stoi(s));

	for (int i = 0; i < temp.size(); i++)
	{
		if (!visited[i])
		{
			visited[i] = true;
			check(s + temp.substr(i, 1));
			visited[i] = false;
		}
	}
}

int main()
{
	cin >> N;

	suso[0] = true;
	suso[1] = true;

	for (int i = 2; i < sqrt(10000000); i++)
	{
		if (!suso[i])
		{
			for (int j = i * i; j < 10000000; j += i)
				suso[j] = true;
		}
	}
	
	while (N--)
	{
		cin >> temp;
		
		memset(visited, 0, sizeof(visited));
		se.clear();

		for (int i = 0; i < temp.size(); i++)
		{
			visited[i] = true;
			check(temp.substr(i, 1));
			visited[i] = false;
		}

		cout << se.size() << endl;
		
	}
}

