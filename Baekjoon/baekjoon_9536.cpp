#include <iostream>
#include <algorithm>
#include <math.h>
#include <queue>
#include <string.h>
#include <string>
#include <map>
#include <stack>
#include <sstream>

using namespace std;

int N;
vector<string> v;

//split token by ' '
vector<string> split(string str, char delimiter) {
	vector<string> internal;
	stringstream ss(str);
	string temp;

	while (getline(ss, temp, delimiter)) {
		internal.push_back(temp);
	}

	return internal;
}

int main()
{
	cin >> N;
	getchar();
	while (N--)
	{
		string s;
		getline(cin, s);
		v = split(s, ' ');

		map<string, int> m;
		while (1)
		{
			string word;
			getline(cin, word);
			vector<string> temp = split(word, ' ');
			m[temp[2]]++;

			if (word == "what does the fox say?")
				break;
		}

		for (int i = 0; i < v.size(); i++)
		{
			if (!m[v[i]])
				cout << v[i] << " ";
		}
		cout << endl;
	}
}