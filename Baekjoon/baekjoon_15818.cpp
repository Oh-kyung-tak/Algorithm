#include <iostream>
#include <string>
#include <string.h>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <queue>
#include <stack>

using namespace std;
long long int N, M;
long long int cnt = 1;
int main()
{
	cin >> N >> M;

	for (int i = 0; i < N; i++)
	{
		int t;
		cin >> t;
		cnt = ((cnt % M) * (t % M)) % M;
	}
		
	cout << cnt << endl;
}