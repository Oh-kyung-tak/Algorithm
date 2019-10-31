#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N;
string word;
int main()
{
	cin >> N;
	cin >> word;

	if (N == 1)
	{
		if (word[0] == '?')
			word[0] = 'a';
	}
	else
	{
		for (int i = 0; i < N / 2; i++)
		{
			if (word[i] == '?')
			{
				if (word[N - i - 1] == '?')
				{
					word[i] = 'a';
					word[N - i - 1] = 'a';
				}
				else
					word[i] = word[N - i - 1];
			}
			else
			{
				if (word[N - i - 1] == '?')
					word[N - i - 1] = word[i];
			}
		}

		if (N % 2 == 1 && word[N / 2] == '?')
			word[N / 2] = 'a';
		
	}
	

	cout << word;
}