#include <iostream>
#include <algorithm>
#include <string>
#include <string.h>
#include <vector>

using namespace std;

int N;
int A, B, C;
int cnt = 0;
int main()
{
	cin >> N;

	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= N - i; j++)
		{
			A = i;
			B = j;
			C = N - (A + B);

			if (A != 0 && B != 0 && C != 0)
			{
				if (C >= B + 2 && A % 2 == 0)
					cnt++;
			}
		}
	}

	cout << cnt << endl;

}