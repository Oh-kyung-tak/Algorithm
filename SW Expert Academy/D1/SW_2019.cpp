#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;
int N;
int sum = 1;

int main()
{
	cin >> N;

	for (int i = 1; i <= N + 1; i++)
	{
		cout << sum << " ";
		sum *= 2;
	}
}