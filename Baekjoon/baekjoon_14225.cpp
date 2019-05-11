#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector <int> v;

int main() {

	int n;
	int d[20];

	cin >> n;

	for (int i = 0; i < n; i++) 
		cin >> d[i];

	v.push_back(0);
	v.push_back(d[0]);

	for (int i = 1; i < n; i++) 
	{
		int x = v.size();
		for (int j = 0; j < x; j++) 
			v.push_back(v[j] + d[i]);
	}

	sort(v.begin(), v.end());
	unique(v.begin(), v.end());


	for (int i = 1; i <= v.size(); i++) 
	{
		if (i == v.size()) 
			cout << i << '\n';
		else if (v[i] != i) 
		{
			cout << i << '\n';
			break;
		}
	}

	return 0;
}
