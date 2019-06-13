#include <iostream>
#include <string.h>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string>
#include <string.h>
#include <queue>
#include <functional>

using namespace std;
int N, Q;
int len[1001];

int main()
{
	cin >> N >> Q;

	for (int i = 1; i <= N; i++)
		cin >> len[i];

	while (Q--)
	{
		int sum = 0;
		int q1, q2;

		cin >> q1 >> q2;

		for (int i = q1; i < q2; i++)
			sum += abs(len[i + 1] - len[i]);

		cout << sum << endl;
	}
}