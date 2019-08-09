#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <string>
#include <string.h>
#include <math.h>
#include <set>

using namespace std;

int N;

int main()
{
	cin >> N;

	for(int k = 1; k <= N; k++)
	{
		int h;
		int cnt;
		string word;
		cin >> h >> word;
		cnt = h;

		for (int i = 0; i < word.size(); i++)
		{
			if (word[i] == 'c')
				cnt++;
			else
				cnt--;

			if (cnt == 0)
				break;
		}

		cout << "Data Set " << k << ":" << endl;
		cout << cnt << endl;
		cout << endl;
	}
}

