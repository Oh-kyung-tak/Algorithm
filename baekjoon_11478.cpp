#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
#include <set>
using namespace std;

set<string> s;
string word;
int cursor = 1;
int cnt = 0;
int main()
{
	cin >> word;
	int len = word.size();
	
	while (cursor <= len)
	{
		for (int i = 0; i < len - (cursor - 1); i++)
			s.insert(word.substr(i, cursor));
		
		cursor++;
	}
	cout << s.size() << endl;
}
