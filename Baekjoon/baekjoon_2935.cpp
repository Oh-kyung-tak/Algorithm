#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <queue>
using namespace std;

string a, op, b;

int main()
{
	cin >> a >> op >> b;

	if (op == "*")
	{
		string temp;
		temp += '1';
		for (int i = 0; i < (a.size() + b.size()) - 2; i++)
			temp += '0';

		cout << temp << endl;
	}
	else
	{
		int a_size = a.size();
		int b_size = b.size();

		string temp;

		if (a_size == b_size)
		{
			temp += '2';
			for (int i = 0; i < a_size - 1; i++)
				temp += '0';

			cout << temp << endl;
		}
		else if (a_size > b_size)
		{
			int cmp = a_size - b_size;
			temp += '1';
			for (int i = 1; i < a_size; i++)
			{
				if (i == cmp)
					temp += '1';
				else
					temp += '0';
			}
			cout << temp << endl;
		}
		else
		{
			int cmp = b_size - a_size;
			temp += '1';
			for (int i = 1; i < b_size; i++)
			{
				if (i == cmp)
					temp += '1';
				else
					temp += '0';
			}
			cout << temp << endl;
		}
	}
}
