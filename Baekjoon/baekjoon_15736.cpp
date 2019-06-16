#include <iostream>
#include <algorithm>
#include <string>
#include <string.h>
#include <vector>

using namespace std;

int cnt = 0;
int N;
int start = 1;

int main()
{
	cin >> N;

	while (1)
	{
		if (start * start <= N)
			cnt++;
		else
			break;
		
		start++;
	}

	cout << cnt << endl;
}