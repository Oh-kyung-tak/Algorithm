#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <queue>

using namespace std;

int main()
{
	int cnt = 1;

	while (1)
	{
		int L, P, V;
		int answer = 0;

		cin >> L >> P >> V;
		
		if (L == 0 && P == 0 && V == 0)
			return 0;

		answer = (V / P) * L;
		V -= (V / P) * P;

		if (V < L)
			answer += V;
		else
			answer += L;

		cout << "Case " << cnt << ":" << " " << answer << endl;

		cnt++;
	}
}