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
	getchar();

	while (N--)
	{
		string word;
		string temp;
		getline(cin, word);
		getline(cin, temp);
	
		for (int i = 0; i < word.size(); i++)
		{
			if (word[i] == ' ')
				cout << word[i];
			else
				cout << temp[word[i] - 'A'];
		}
		
		cout << endl;
	}
	
}