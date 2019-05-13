#include<iostream>
#include<string>
#include<string.h>
#include<queue>
#include<algorithm>
#include <map>

using namespace std;
map<string, int> m;
vector<string> v;

int N;

int main()
{
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		string temp;
		cin >> temp;
		v.push_back(temp);
	}

	for (int i = 0; i < v.size(); i++)
	{
		string temp = v[i];
		string reverse_temp = temp;
		reverse(reverse_temp.begin(), reverse_temp.end());

		if (temp == reverse_temp || m[temp])
		{
			cout << temp.size() << " " << temp.substr(temp.size() / 2, 1);
			return 0;
		}
		else
		{
			m[temp]++;
			m[reverse_temp]++;
		}
		
	}
}