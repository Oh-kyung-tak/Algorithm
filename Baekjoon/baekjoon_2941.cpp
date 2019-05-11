#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <string>
#include <queue>

using namespace std;

queue<char> q;
string word;
int i = 0, cnt = 0;
int size;

int main()
{
	cin >> word;
	
	size = word.size();

	while (1)
	{
		if (i == size)
			break;

		if (word[i] == 'c')
		{
			if (word[i + 1] == '=' || word[i + 1] == '-')
			{
				cnt++;
				i += 2;
			}
			else
			{
				cnt++;
				i++;
			}
		}
		else if (word[i] == 'd')
		{
			if (word[i + 1] == '-')
			{
				cnt++;
				i += 2;
			}
			else if (word[i + 1] == 'z'  && word[i + 2] == '=')
			{
				cnt++;
				i += 3;
			}
			else
			{
				cnt++;
				i++;
			}
		}
		else if (word[i] == 'l')
		{
			if (word[i + 1] == 'j')
			{
				cnt++;
				i += 2;
			}
			else
			{
				cnt++;
				i++;
			}
		}
		else if (word[i] == 'n')
		{
			if (word[i + 1] == 'j')
			{
				cnt++;
				i += 2;
			}
			else
			{
				cnt++;
				i++;
			}
		}
		else if (word[i] == 's')
		{
			if (word[i + 1] == '=')
			{
				cnt++;
				i += 2;
			}
			else
			{
				cnt++;
				i++;
			}
		}
		else if (word[i] == 'z')
		{
			if (word[i + 1] == '=')
			{
				cnt++;
				i += 2;
			}
			else
			{
				cnt++;
				i++;
			}
		}
		else
		{
			cnt++;
			i++;
		}
	}

	cout << cnt;
}
