#include<iostream>
#include<string>
#include<algorithm>
#include<queue>

using namespace std;

vector<int> v;
int cnt = 0;
int main()
{
	string s;
	cin >> s;

	for (int i = 0; i < s.size(); i++)
		v.push_back(s[i] - '0');
	
	do
	{
		if (cnt == 1)
		{
			for (int i = 0; i < v.size(); i++)
				cout << v[i];

			return 0;
		}
		cnt++;
	} while (next_permutation(v.begin(), v.end()));

	cout << "0" << endl;
}
