#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <math.h>
using namespace std;

vector<string> v;

int main()
{
	string s;
	cin >> s;
	int size = s.size();
	v.push_back(s);
	for (int i = 1; i < size; i++)
		v.push_back(s.erase(0, 1));
	
	sort(v.begin(), v.end());

	for (int i = 0; i < v.size(); i++)
		cout << v[i] << endl;
}
