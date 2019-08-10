#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <string>
#include <math.h>
#include <set>

using namespace std;
int N;
int temp;
string x;
double n;

int main()
{
	cin >> N;
	
	while (N--)
	{
		cin >> n;
		getline(cin, x);
		for (int i = 0; i < x.size(); i++)
			switch (x[i])
			{
			case '@':
				n *= 3;
				break;
			case '#':
				n -= 7;
				break;
			case '%':
				n += 5;
				break;
			}
		printf("%.2f\n", n);
	}
}

