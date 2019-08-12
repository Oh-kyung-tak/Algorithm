#include <iostream>
#include <algorithm>
#include <string.h>
#include <string>
#include <math.h>
#include <vector>

using namespace std;

int N;
string word;
string temp = "";

int main()
{
	cin >> N;
	getchar();

	while (N--)
	{
		vector<string> v;

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
		}
		v.push_back(temp);
		temp = "";

		for (int i = 2; i < v.size(); i++)
			cout << v[i] << " ";

		cout << v[0] << " " << v[1] << endl;
	}

}