#include <iostream>
#include <string>
#include <string.h>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <math.h>

using namespace std;

string word;
int cnt = 0;
int ans = 0;
int cnt_num = -1;

int main()
{
	cin >> word;

	for (int i = 0; i < word.size(); i++)
	{
		if (cnt_num == -1)
		{
			cnt_num = word[i] - '0';
			cnt = 1;
		}
		else
		{
			if ((word[i] - '0') - cnt_num == 1)
			{
				cnt++;
				cnt_num = word[i] - '0';
			}
			else
			{
				if (cnt == 3)
					ans++;

				cnt = 1;
				cnt_num = word[i] - '0';
			}
		}
	}
	
	if (cnt == 3)
		ans++;

	cout << ans << endl;
}