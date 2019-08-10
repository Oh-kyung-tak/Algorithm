#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <string>
#include <math.h>
#include <set>

using namespace std;
int N, M;
string word;
int cnt = 0;
int temp = 0;

int main()
{
	cin >> N >> M;
	cin >> word;


	for (int i = 0; i < M - 2; i++)
	{
		if (word[i] == 'O')
		{
			temp = 0;
			continue;
		}
		else
		{
			if (word[i + 1] == 'O' && word[i + 2] == 'I')
			{
				temp++;
				i += 1;

				if (temp == N)
				{
					cnt++;
					temp--;
				}
			}
			else
				temp = 0;
		}
	}

	cout << cnt << endl;
}

