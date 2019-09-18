#include <iostream>
#include <algorithm>
#include <math.h>
#include <queue>
#include <string.h>
#include <string>

using namespace std;

int N;
int candy[1000];
int sum;

int main()
{
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> candy[i];
		sum += candy[i];
	}
	
	sum /= 2;

	for (int i = 0; i < N; i++)
	{
		int temp = 0;
		for (int j = 0; j < N; j += 2)
			temp += candy[(i + j) % N];

		cout << temp << " " << sum << endl;
		cout << temp - sum << endl;
	}
}