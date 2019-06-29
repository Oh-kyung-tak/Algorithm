#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cstring>
using namespace std;

int T;
int money[8] = { 50000,10000,5000,1000,500,100,50,10 };
int cnt[8];

int main()
{
	cin >> T;

	for (int k = 1; k <= T; k++)
	{
		vector<int> v;
		int n;
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			int temp;
			cin >> temp;
			v.push_back(temp);
		}

		sort(v.begin(), v.end());

		cout << "#" << k << " ";
		for (int i = 0; i < v.size(); i++)
			cout << v[i] << " ";
		cout << endl;

	}
}