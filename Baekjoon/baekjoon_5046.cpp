#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <time.h>

using namespace std;

int N, B, H, W;
int cost = 20000;
int sum = 0;

int main(void)
{
	cin >> N >> B >> H >> W;

	for (int i = 0; i < H; i++)
	{
		int c;
		cin >> c;

		for (int j = 1; j <= W; j++)
		{
			int people;
			cin >> people;

			if (people >= N)
				cost = min(cost, c);
		}
	}

	if (cost == 20000 || cost * N > B)
		cout << "stay home";
	else
		cout << cost * N;
}