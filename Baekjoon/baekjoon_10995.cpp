#include <iostream>
#include <string.h>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string>
#include <string.h>
using namespace std;

int N;
int start;
int ss = 1;
int main()
{
	cin >> N;
	start = N * 2;
	if (N == 1)
		cout << "*" << endl;
	else
	{
		while (ss <= N)
		{
			if (ss % 2 == 1)
			{
				for (int i = 1; i <= start; i++)
				{
					if (i % 2 == 0)
						cout << " ";
					else
						cout << "*";
				}
			
			}
			else
			{
				for (int i = 1; i <= start; i++)
				{
					if (i % 2 == 0)
						cout << "*";
					else
						cout << " ";
				}
			}
			ss++;
			cout << endl;
		}
	}
}