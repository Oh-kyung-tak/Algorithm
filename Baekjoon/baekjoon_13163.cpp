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
		vector<string> v;
		string word;
		string temp;
		getline(cin, word);
		
		for (int i = 0; i < word.size(); i++)
		{
			if (word[i] == ' ')
			{
				v.push_back(temp);
				temp = "";
			}
			else
				temp += word[i];

			if(i == word.size() - 1)
				v.push_back(temp);
		}
		
		for (int i = 0; i < v.size(); i++)
		{
			if (i == 0)
				cout << "god";
			else
				cout << v[i];
		}

		cout << endl;
	}
	
}