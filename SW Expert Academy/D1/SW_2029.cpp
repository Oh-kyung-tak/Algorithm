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

	for (int k = 1; k <= N; k++)
	{
		int a, b;
		cin >> a >> b;
		cout << "#" << k << " " << a / b << " " << a % b << endl;
	}
}