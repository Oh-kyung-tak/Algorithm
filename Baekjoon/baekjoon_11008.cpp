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

	while (N--)
	{
		string word, clip;
		cin >> word >> clip;
		
		int cnt = 0;

		for (int i = 0; i < word.size(); i++)
		{
			if (word.substr(i, clip.size()) == clip)
			{
				cnt++;
				i += clip.size() - 1;
			}
			else
				cnt++;
		}
		
		cout << cnt << endl;
	}
}

