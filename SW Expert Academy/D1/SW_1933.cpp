#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;
int N;
int sum = 0;

int main()
{
	cin >> N;

	for (int i = 1; i <= N; i++)
	{
		if (N % i == 0)
			cout << i << " ";
	}
}