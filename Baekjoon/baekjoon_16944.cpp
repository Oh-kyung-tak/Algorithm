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

int N;
int check[4];
string word;
int cnt = 0;

int main()
{
	cin >> N;
	cin >> word;

	for (int i = 0; i < word.size(); i++)
	{
		if (word[i] >= '0' && word[i] <= '9')
			check[0]++;
		else if (word[i] >= 'a' && word[i] <= 'z')
			check[1]++;
		else if (word[i] >= 'A' && word[i] <= 'Z')
			check[2]++;
		else
			check[3]++;
	}
	
	for (int i = 0; i < 4; i++)
		if (check[i] == 0)
			cnt += 1;

	if (cnt + N >= 6)
		cout << cnt << endl;
	else
		cout << 6 - N << endl;
}