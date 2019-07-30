#include <iostream>
#include <string>
#include <string.h>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <queue>
#include <stack>

using namespace std;

int N;
int main()
{
	cin >> N;
	
	for(int i = 1; i <= N; i++)
	{
		string word;
		cin >> word;
		
		cout << "String " << "#" << i << endl;
		for (int i = 0; i < word.size(); i++)
		{
			if (char((word[i] - 'A') + 'B') > 'Z')
				cout << "A";
			else
				cout << char((word[i] - 'A') + 'B');
		}
		cout << endl;
		cout << endl;
	}
}