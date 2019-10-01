#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <string.h>
#include <queue>

using namespace std;

int N;
string answer[11] = { "zero", "one","two","three", "four", "five", "six", "seven", "eight", "nine", "ten" };

int convert(string s)
{
	if (s == "zero")
		return 0;
	else if (s == "one")
		return 1;
	else if (s == "two")
		return 2;
	else if (s == "three")
		return 3;
	else if (s == "four")
		return 4;
	else if (s == "five")
		return 5;
	else if (s == "six")
		return 6;
	else if (s == "seven")
		return 7;
	else if (s == "eight")
		return 8;
	else if (s == "nine")
		return 9;
	else
		return 10;
}

int check(int a1, int a2, string s)
{
	if (s == "+")
		return a1 + a2;
	else if (s == "-")
		return a1 - a2;
	else
		return a1 * a2;
}

int main()
{
	cin >> N;
	getchar();

	while (N--)
	{
		string word;
		vector<string> v;
		string temp = "";

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

		int a1 = convert(v[0]);
		int a2 = convert(v[2]);
		int ans = check(a1, a2, v[1]);
		
		if (ans < 0 || ans > 10)
			cout << "No" << endl;
		else
		{
			string w = answer[ans];
			string w2 = v[4];
			sort(w.begin(), w.end());
			sort(w2.begin(), w2.end());

			if (w == w2)
				cout << "Yes" << endl;
			else
				cout << "No" << endl;
		}
	}
}