#include <iostream>
#include <string.h>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string>
#include <string.h>
#include <queue>
#include <functional>

using namespace std;
int N;
long long int arr[36];
int main()
{
	cin >> N;

	arr[0] = 1;

	for (int i = 1; i <= N; i++)
	{
		long long int sum = 0;
		for (int j = 0; j <= i - 1; j++)
			sum += arr[j] * arr[i - 1 - j];
		
		arr[i] = sum;
	}
	
	cout << arr[N] << endl;
}