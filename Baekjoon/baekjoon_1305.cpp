#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>
#include <string>
#include <string.h>

using namespace std;

//KMP Algorithm
vector<int> kmp(string s)
{
	int M = s.size();
	vector<int> pi(M, 0);
	int begin = 1, matched = 0;
	while (begin + matched < M)
	{
		if (s[begin + matched] == s[matched])
		{
			matched++;
			pi[begin + matched - 1] = matched;
		}
		else
		{
			if (matched == 0)
				begin++;
			else
			{
				begin += matched - pi[matched - 1];
				matched = pi[matched - 1];
			}
		}
	}

	return pi;
}

int main()
{
	int L;
	string s;
	cin >> L >> s;

	vector<int> pi = kmp(s);

	cout << L - pi[L - 1] << endl;
}