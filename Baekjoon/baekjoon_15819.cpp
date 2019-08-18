#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <string>
#include <string.h>
#include <math.h>
#include <set>
#include <queue>

using namespace std;

vector<string> v;
int N, I;

int main()
{
	cin >> N >> I;

	for (int i = 0; i < N; i++)
	{
		string temp;
		cin >> temp;
		v.push_back(temp);
	}

	sort(v.begin(), v.end());

	cout << v[I - 1];
}


