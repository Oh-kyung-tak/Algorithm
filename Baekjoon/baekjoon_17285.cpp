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

int main()
{
	cin >> word;
	
	int num = word[0] ^ 'C';

	for (int i = 0; i < word.size(); i++)
	{
		char temp = word[i] ^ num;
		cout << temp;
	}
}