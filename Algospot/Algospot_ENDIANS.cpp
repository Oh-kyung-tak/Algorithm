#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <string.h>
#include <queue>

using namespace std;

int N;

int main()
{
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		unsigned int temp;
		cin >> temp;
		cout << ((temp % 256) << 24) + (((temp >> 8) % 256) << 16) + (((temp >> 16) % 256) << 8) + ((temp >> 24) % 256) << endl;
	}
}