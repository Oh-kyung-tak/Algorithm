#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
#include <queue> 
#include <string.h>
#include <string>
#include <map>

using namespace std;

int r = 0, l = 0, cnt = 0;
string word;
string lw = "qwertyasdfgzxcvb";

int main()
{
	getline(cin, word);

	for (int i = 0; i < word.size(); i++)
	{
		if (word[i] == ' ')
			cnt++;
		else
		{
			if (word[i] < 'a')
			{
				word[i] += 32;
				cnt++;
			}

			if (lw.find(word[i]) != string::npos)
				l++;
			else
				r++;
		}
	}

	if (cnt > 0)
	{
		if (abs(l - r) >= cnt)
		{
			if (l > r)
				r += cnt;
			else
				l += cnt;
		}
		else
		{
			if (l > r)
			{
				cnt -= (l - r);
				r = l;
			}
			else
			{
				cnt -= (r - l);
				l = r;
			}
			
			if (cnt % 2 == 0)
			{
				l += cnt / 2;
				r += cnt / 2;
			}
			else
			{
				l += (cnt / 2) + 1;
				r += cnt / 2;
			}
		}
	}

	cout << l << " " << r << endl;
}