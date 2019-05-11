#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <stack>

using namespace std;

int main()
{
	string eight;
	string two;
	cin >> eight;
	int size = eight.size();

	for (int i = 0; i < size; i++)
	{
		if (i == 0)
		{
			if (eight[i] == '0')
				two += "0";
			else if (eight[i] == '1')
				two += "1";
			else if (eight[i] == '2')
				two += "10";
			else if (eight[i] == '3')
				two += "11";
			else if (eight[i] == '4')
				two += "100";
			else if (eight[i] == '5')
				two += "101";
			else if (eight[i] == '6')
				two += "110";
			else if (eight[i] == '7')
				two += "111";
		}
		else
		{
			if (eight[i] == '0')
				two += "000";
			else if (eight[i] == '1')
				two += "001";
			else if (eight[i] == '2')
				two += "010";
			else if (eight[i] == '3')
				two += "011";
			else if (eight[i] == '4')
				two += "100";
			else if (eight[i] == '5')
				two += "101";
			else if (eight[i] == '6')
				two += "110";
			else if (eight[i] == '7')
				two += "111";
		}
	}

	cout << two;

}
