#include <iostream>
#include <algorithm>
#include <string.h>
#include <string>

using namespace std;

int N;
int stone[100001];

int main()
{
	cin >> N;
	
	for (int Test_case = 1; Test_case <= N; Test_case++)
	{
		int P, Q, R, S, W;
		int A_sum, B_sum;
		int min_sum;

		cin >> P >> Q >> R >> S >> W;

		A_sum = P * W;
		
		if (R > W)
			B_sum = Q;
		else
			B_sum = Q + (W - R) * S;

		min_sum = min(A_sum, B_sum);

		cout << "#" << Test_case << " " << min_sum << endl;
	}

	return 0;
}