#include <iostream>
#include <algorithm>
#include <string>
#include <string.h>
#include <vector>
#include <map>
#include <set>
#include <math.h>

using namespace std;
int T;

int main()
{
	cin >> T;

	while (T--)
	{
		int num[100001];
		int temp;
		int max_num;

		cin >> temp;
		memset(num, 0, sizeof(num));

		for (int i = 2; i <= temp; i++)
		{
			
			while (temp % i == 0)
			{
				num[i]++;
				temp /= i;
			}
			max_num = i;

		}

		for (int i = 2; i <= max_num; i++)
		{
			if(num[i] != 0)
				cout << i << " " << num[i] << endl;
		}
			
	}
}
