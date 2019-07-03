#include <iostream>
#include <vector>
#include <string>
#include <string.h>
#include <algorithm>
#include <set>
#include <map>

using namespace std;

int T;
bool visited[10001];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); 
	cout.tie(NULL);

	cin >> T;

	for (int Test_case = 1; Test_case <= T; Test_case++)
	{
		memset(visited, false, sizeof(visited));
		vector<string> v;
		int N;

		cin >> N;
		for (int i = 0; i < N; i++)
		{
			string c;
			cin >> c;
			v.push_back(c);
		}

		for (int i = 0; i < v.size(); i++)
			visited[stoi(v[i])] = true;

		for (int i = 0; i < (int)v.size() - 1; i++)
		{
			string ss = v[i] + v[i + 1];
			visited[stoi(ss)] = true;
		}

		for (int i = 0; i < (int)v.size() - 2; i++)
		{
			string ss = v[i] + v[i + 1] + v[i + 2];
			visited[stoi(ss)] = true;
		} 

		cout << "#" << Test_case << " ";
		for (int i = 0; i <= 10000; i++)
		{
			if (!visited[i])
			{
				cout << i;
				break;
			}
		}
		cout << "\n";
	}
}