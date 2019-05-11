#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <math.h>

using namespace std;

int T;
vector<int> v;

int main()
{
	int a, b, c;
	string word;
	cin >> a >> b >> c;
	v.push_back(a);
	v.push_back(b);
	v.push_back(c);
	
	sort(v.begin(), v.end());

	cin >> word;

	for (int i = 0; i < word.size(); i++)
	{
		if (word[i] == 'A')
			cout << v[0] << " ";
		else if (word[i] == 'B')
			cout << v[1] << " ";
		else
			cout << v[2] << " ";
	}
}
