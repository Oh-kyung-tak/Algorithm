#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cstring>
#include <deque>

using namespace std;

int main()
{
	int check = 0;
	int sum = 1;
	string s;
	cin >> s;
	
	if (s[0] == 'd')
	{
		check = 1;
		sum *= 10;
	}
	else
	{
		check = 2;
		sum *= 26;
	}
		
	for (int i = 1; i < s.size(); i++)
	{
		char temp = s[i];

		if (temp == 'd')
		{
			if (check == 1)
				sum *= 9;
			else
				sum *= 10;

			check = 1;
		}
		else
		{
			if (check == 2)
				sum *= 25;
			else
				sum *= 26;

			check = 2;
		}
	}

	cout << sum << endl;
	
}
