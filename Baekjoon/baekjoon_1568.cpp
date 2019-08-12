#include <iostream>
#include <algorithm>
#include <string.h>
#include <string>
#include <math.h>
#include <vector>

using namespace std;

int N;
int cnt = 1;
int sec = 1;

int main()
{
	cin >> N;

	while (1)
	{
		
		if (N >= cnt)
			N -= cnt;
		else
		{
			cnt = 1;
			N -= cnt;
		}

		if (N == 0)
			break;

		sec++;
		cnt++;
	}

	cout << sec << endl;
}