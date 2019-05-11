#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int main()
{
	string two;
	string eight;
	int len;
	int count = 0;
	int num = 1;
	int temp = 0;

	cin >> two;

	len = two.size();

	for (int i = len - 1; i >= 0; i--)
	{
		temp += (two[i] - '0') * num;

		if (count == 2)
		{
			eight += temp + '0';
			count = 0;
			num = 1; 
			temp = 0;
		}
		else if (count != 2 && i == 0)
			eight += temp + '0';
		else
		{
			num *= 2;
			count++;
		}
			
	}

	for (int i = eight.size() - 1; i >= 0; i--)
		cout << eight[i];
}
