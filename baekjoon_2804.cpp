#include <iostream>
#include <map>
#include <string.h>
#include <string>
#include <vector>
#include <queue>
using namespace std;

char wordmap[31][31];
string w1, w2;
int w1_cnt, w2_cnt;
int check = 0;

int main()
{
	cin >> w1 >> w2;

	memset(wordmap, '.', sizeof(wordmap));

	for (int i = 0; i < w1.size(); i++)
	{
		for (int j = 0; j < w2.size(); j++)
		{
			if (w1[i] == w2[j])
			{
				w1_cnt = i;
				w2_cnt = j;
				check = 1;
				break;
			}
		}

		if (check == 1)
			break;
	}
	
	for (int i = 0; i < w2.size(); i++)
		wordmap[i][w1_cnt] = w2[i];

	for (int i = 0; i < w1.size(); i++)
		wordmap[w2_cnt][i] = w1[i];

	for (int i = 0; i < w2.size(); i++)
	{
		for (int j = 0; j < w1.size(); j++)
			cout << wordmap[i][j];

		cout << endl;
	}
}
