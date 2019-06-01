#include <iostream>
#include <vector>
#include <string>
#include <string.h>
#include <algorithm>
#include <set>

using namespace std;

string word;
string bomb;
char result[1000001];
int idx = 0;

int main()
{
	cin >> word >> bomb;
	int w_size = word.size();
	
	for (int i = 0; i < w_size; i++)
	{
		result[idx++] = word[i];
		int b_size = bomb.size();

		if (word[i] == bomb[--b_size])
		{
			bool check = false;
			int s_len = idx - bomb.size();
			for (int k = idx - 1; k >= s_len; k--)
			{
				if (result[k] == bomb[b_size--])
					check = true;
				else
				{
					check = false;
					break;
				}
			}

			if (check)
				idx -= bomb.size();
		}
	}

	if (idx == 0)
		cout << "FRULA" << endl;
	else
	{
		for (int i = 0; i < idx; i++)
			cout << result[i];
		cout << endl;
	}
}