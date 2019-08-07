#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <string>
#include <string.h>
#include <math.h>
#include <set>

using namespace std;

int T;

int main()
{
	cin >> T;

	while (T--)
	{
		int N, C;
		
		cin >> N >> C;
		int sum = 0;

		sum += (N / C);

		if (N % C > 0)
			sum += 1;

		cout << sum <<  endl;
	}
}

