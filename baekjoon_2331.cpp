#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <math.h>

using namespace std;

int visit[300000] = { 0 };
vector<int> v;
int main()
{
	int A, P;
	int num;
	int count = 0;

	cin >> A >> P;

	visit[A] = 1;

	while (1)
	{
		int nextnum = 0;

		v.push_back(A);

		while (A)
		{
			nextnum += pow(A % 10, P);
			A /= 10;
		}
		
		visit[nextnum]++;
		
		if (visit[nextnum] >= 2)
			break;

		A = nextnum;
	}

	for (int i = 0; i < v.size(); i++)
	{
		if (visit[v[i]] >= 2)
			break;

		count++;
	}
	cout << count;
}
