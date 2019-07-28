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
int main()
{
	cin >> N;

	while (N--)
	{
		vector<int> v;
		string word;
		cin >> word;

		for (int i = 0; i < word.size(); i++)
			v.push_back(word[i] - '0');

		if (next_permutation(v.begin(), v.end()))
		{
			for (int i = 0; i < v.size(); i++)
				cout << v[i];

			cout << endl;
		}
		else
			cout << "BIGGEST" << endl;
	}
	
}