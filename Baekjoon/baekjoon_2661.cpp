#include <iostream>
#include <string>
#include <string.h>

using namespace std;

string word;
int N;
bool c = false;

bool check_num(string s)
{
	int len = s.length();
	int start = len - 1;

	for (int i = 1; i <= len / 2; i++) 
	{
		string first = s.substr(start - i, i);
		string second = s.substr(start, i);
		if (first.compare(second) == 0) 
			return false;
		start -= 1;
	}
	return true;
}

void find_num(int len, string w)
{
	if (c)
		return;
	if (len == N)
	{
		c = true;
		cout << w << endl;
		return;
	}
	else
	{
		for (int i = 1; i <= 3; i++)
		{
			char c = i + '0';
			if (check_num(w + c))
				find_num(len + 1, w + c);
		}
	}
}

int main()
{
	cin >> N;

	find_num(1, "1");
}
