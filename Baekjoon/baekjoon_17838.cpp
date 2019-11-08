#include <vector>
#include <map>
#include <algorithm>
#include <iostream>
#include <queue>
#include <string.h>

using namespace std;

int N;

int main()
{
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		string temp;
		cin >> temp;

		if (temp.length() != 7)
			cout << "0" << endl;
		else
		{
			if (temp[0] == temp[1] && temp[1] == temp[4])
			{
				if (temp[2] == temp[3] && temp[3] == temp[5] && temp[5] == temp[6])
				{
					if (temp[0] != temp[2])
						cout << "1" << endl;
					else
						cout << "0" << endl;
				}
				else
					cout << "0" << endl;
			}
			else
				cout << "0" << endl;
		}
	}

}