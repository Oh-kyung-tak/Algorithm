#include <iostream>

using namespace std;

int T, N, C, P;
int start = 1;
int cnt = 0;

int main()
{
	cin >> T >> N >> C >> P;

	while (true)
	{
		start += N;
		
		if (start > T)
			break;

		cnt++;
	}

	cout << cnt * C * P << endl;
}