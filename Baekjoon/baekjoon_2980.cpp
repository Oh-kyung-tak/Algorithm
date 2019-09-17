#include <iostream>
#include <algorithm>
#include <math.h>
#include <queue>
#include <string.h>
#include <string>

using namespace std;

int N, L;
int current = 0;
int time = 0;

int main()
{
	cin >> N >> L;

	for (int i = 0; i < N; i++)
	{
		int D, R, G;
		cin >> D >> R >> G;

		time += D - current;
		current = D;

		int red = time % (R + G);

		if (red <= R)
			time += R - red;
	}

	time += L - current;

	cout << time << endl;
}