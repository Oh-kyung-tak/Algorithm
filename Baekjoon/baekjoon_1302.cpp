#include<iostream>
#include<set>
#include<algorithm>
#include<string>
#include<vector>
#include<map>

using namespace std;

map<string, int> m;
string book;
int N;
int max_num = -1;

int main()
{
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		string name;
		cin >> name;
		m[name]++;
	}

	for (auto it = m.begin(); it != m.end(); it++) 
	{
		if (it->second > max_num)
		{
			max_num = it->second;
			book = it->first;
		}
	}

	cout << book << endl;
}
