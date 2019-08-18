#include <iostream>
#include <string>
#include <string.h>
#include <vector>
#include <math.h>
#include <algorithm>
#include <map>
#include <queue>

using namespace std;

int N, K;

int main()
{
	while (cin >> N >> K)
	{
		int coupon = N / K;
		int dis = N % K;
		int sum = N;

		while (1)
		{
			sum += coupon;
			dis += coupon;

			if (dis < K)
				break;

			coupon = dis / K;
			dis -= coupon * K;
			
		}

		cout << sum << endl;
	}
}