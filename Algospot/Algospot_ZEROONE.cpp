#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
#include <queue> 

using namespace std;

int T;
int num[1000001];
int main()
{
	string word;
	cin >> word;

	num[0] = 0;
	for (int i = 1; i < word.size(); i++)
	{
		if (word[i - 1] == word[i])
			num[i] = num[i - 1];
		else
			num[i] = i;
	}

	cin >> T;
	
	while (T--)
	{
		int x, y;
		
		cin >> x >> y;
		if (num[x] == num[y])
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}
}