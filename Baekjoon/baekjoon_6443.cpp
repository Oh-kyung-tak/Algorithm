#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <string>
#include <math.h>
#include <set>

using namespace std;
int N;
int temp;
string x;
double n;

int main()
{
	cin >> N;
	
	while (N--)
	{
		string word;
		vector<char> v;

		cin >> word;
		
		for (int i = 0; i < word.size(); i++)
			v.push_back(word[i]);

		sort(v.begin(), v.end());

		do
		{
			for (int i = 0; i < v.size(); i++)
				cout << v[i];
			cout << '\n';
		} while (next_permutation(v.begin(), v.end()));

	}
}

