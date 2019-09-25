#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <string.h>
#include <queue>

using namespace std;

int N;

int main()
{
	cin >> N;

	while (N--)
	{
		string word;
		vector<string> v;

		cin >> word;

		int size = word.size();

		for (int i = 0; i < size; i += 2)
			v.push_back(word.substr(i, 2));
		


		sort(v.begin(), v.end());

		for (int i = 0; i < v.size(); i++)
			cout << v[i];

		cout << endl;
	}
}