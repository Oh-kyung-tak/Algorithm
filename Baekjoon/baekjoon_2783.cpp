#include <iostream>
#include <vector>
#include <string>
#include <string.h>
#include <algorithm>
#include <set>

using namespace std;

int T;
int N, M;
vector<double> v;
double X, Y;

int main()
{
	cin >> X >> Y;
	v.push_back(X / Y);

	int N;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> X >> Y;
		v.push_back(X / Y);
	}

	sort(v.begin(), v.end());

	printf("%.2f", v[0] * 1000);
}