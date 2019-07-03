#include <iostream>
#include <vector>
#include <string>
#include <string.h>
#include <algorithm>
#include <set>
#include <map>

using namespace std;

int T;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); 
	cout.tie(NULL);

	cin >> T;

	for (int Test_case = 1; Test_case <= T; Test_case++)
	{
		string word;
		vector<char> v[21];
		int N;

		cin >> word;
		
		for (int i = 0; i < word.size(); i++)
			v[i + 1].push_back(word[i]);

		cin >> N;

		for (int i = 0; i < N; i++)
		{
			int temp;
			cin >> temp;
			v[temp].push_back('-');
		}
		
		cout << "#" << Test_case << " ";
		for (int i = 0; i <= word.size(); i++)
		{
			for (int j = 0; j < v[i].size(); j++)
				cout << v[i][j];
		}
		cout << endl;

	}
}