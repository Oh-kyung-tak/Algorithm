#include <iostream>
#include <string>
#include <string.h>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <math.h>

using namespace std;

//입력 범위 확인 잘하기
int N;
long long int gcd(long long int a, long long int b)
{
	if (a < b)
	{
		int tmp = b;
		b = a;
		a = tmp;
	}

	while (b != 0)
	{
		int tmp = b;
		b = a % b;
		a = tmp;
	}

	return a;
}

long long int lcd(long long int a, long long int b)
{
	return a * b / gcd(a, b);
}

int main()
{
	cin >> N;

	while (N--)
	{
		long long int a, b;
		cin >> a >> b;

		cout << lcd(a, b) << endl;

	}
}