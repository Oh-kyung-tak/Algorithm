#include <iostream>
#include <algorithm>
#include <string>
#include <string.h>
#include <vector>
#include <queue>
#define MAX 1001

using namespace std;
long long int sum = 0;

int N;

int main()
{
	cin >> N;

	for (int i = 1; i <= N * N; i++)
	{
		int num;
		cin >> num;
		sum += num;
	}

	cout << sum << endl;
}