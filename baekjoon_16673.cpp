#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

int C, K, P;

int main()
{
	int sum = 0;
	cin >> C >> K >> P;

	for (int i = 1; i <= C; i++)
		sum += (K * i) + (P * i * i);

	cout << sum << endl;
}
