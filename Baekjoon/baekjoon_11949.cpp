#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <string>
#include <string.h>
#include <math.h>
#include <set>

using namespace std;

int N, M;
int p_card[101];


int main()
{
	cin >> N >> M;

	for (int i = 1; i <= N; i++)
		cin >> p_card[i];

	for (int j = 1; j <= M; j++)
	{
		for (int i = 1; i <= N - 1; i++)
		{
			if (p_card[i] % j > p_card[i + 1] % j)
			{
				int temp = p_card[i];
				p_card[i] = p_card[i + 1];
				p_card[i + 1] = temp;
			}
		}

	}

	for (int i = 1; i <= N; i++)
		cout << p_card[i] << endl;
	
}

