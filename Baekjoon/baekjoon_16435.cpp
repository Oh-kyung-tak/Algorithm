#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <string>
#include <string.h>
#include <math.h>
#include <set>

using namespace std;

int N, M;
vector<int> v;

int main()
{
	cin >> N >> M;

	for (int i = 0; i < N; i++)
	{
		int t;
		cin >> t;
		v.push_back(t);
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < N; i++)
	{
		if (M >= v[i])
			M++;
		else
			break;
	}

	cout << M << endl;
}

