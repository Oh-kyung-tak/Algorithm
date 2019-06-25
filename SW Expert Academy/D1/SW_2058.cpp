#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;
int N;
vector<int> v;
int sum = 0;

int main()
{
	cin >> N;

	while (N)
	{
		sum += N % 10;
		N /= 10;
	}
	
	cout << sum << endl;
}