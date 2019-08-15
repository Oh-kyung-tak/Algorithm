#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <queue>
#include <string>
#include <string.h>
#include <math.h>
#include <set>

using namespace std;

int N;
long long int sum = 0;

int main()
{
	cin >> N;
	
	for (int i = 0; i < N; i++)
	{
		int temp;
		cin >> temp;
		sum += pow(temp / 10, temp % 10);
	}

	cout << sum << endl;
}
