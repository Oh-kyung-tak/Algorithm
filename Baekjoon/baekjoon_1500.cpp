#include <iostream>
#include <algorithm>
#include <math.h>
#include <queue>
#include <string.h>
#include <string>

using namespace std;

long long int ans = 1;
int S, K;
int remain;
vector<int> v;

int main()
{
	cin >> S >> K;

	for (int i = 0; i < K; i++)
		v.push_back(S / K);

	remain = S - (S / K) * K;
	
	for (int i = 0; i < v.size(); i++)
	{
		if (remain > 0)
		{
			ans *= (v[i] + 1);
			remain--;
		}
		else
			ans *= v[i];
	}

	cout << ans << endl;
}