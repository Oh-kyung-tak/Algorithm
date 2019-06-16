#include <iostream>
#include <algorithm>
#include <string>
#include <string.h>
#include <vector>

using namespace std;

int N;
int arr[3][2] = { {1,3},{1,4},{3,4} };
int ans = 0;

bool fun(int a, int b)
{
	for (int i = 0; i < 3; i++)
		if (arr[i][0] == a && arr[i][1] == b)
			return true;
	return false;
}

int main()
{
	cin >> N;

	for (int i = 1; i <= N; i++)
	{
		int a, b;
		cin >> a >> b;
		if (fun(a, b) || fun(b, a))
			ans++;
	}

	if (N == 3 && ans == 3)
		cout << "Wa-pa-pa-pa-pa-pa-pow!" << endl;
	else
		cout << "Woof-meow-tweet-squeek" << endl;
}