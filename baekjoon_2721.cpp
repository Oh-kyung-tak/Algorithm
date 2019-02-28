#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;
int sam[303];
int main()
{
	int T;
	int ff = 0;

	scanf("%d", &T);

	for (int i = 1; i < 304; i++)
	{
		ff += i;
		sam[i] = ff;
	}
	
	while (T--)
	{
		long long int sum = 0;
		int nn;

		scanf("%d", &nn);

		for (int i = 1; i <= nn; i++)
			sum += i * sam[i + 1];
		
		cout << sum << endl;
	}
}
