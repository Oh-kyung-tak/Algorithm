#include <iostream>
#include <string>
#include <string.h>
#include <queue>
#include <algorithm>
#include <map>

using namespace std;

int N;

int main()
{ 
	cin >> N;

	for (int i = 1; i <= N; i++)
	{
		if ((i + 1) * (i + 1) - i == N)
		{
			cout << i << endl;
			return 0;
		}
	}
}