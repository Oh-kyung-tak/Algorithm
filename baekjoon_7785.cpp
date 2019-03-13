#include<iostream>
#include<set>
#include<algorithm>
#include<string>
#include<vector>
#include<map>

using namespace std;

map<string, int> m;

int main()
{
	int N;

	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		string name, code;
		cin >> name >> code;

		if (code == "enter")
			m.insert(make_pair(name, 1));
		else
			m.erase(name);
	}

	//역순으로 뽑기 위하여 reverse_iterator
	map<string, int>::reverse_iterator it;
	for (it = m.rbegin(); it != m.rend(); it++)
		cout << it->first << "\n";

}
