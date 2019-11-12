#include <iostream>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

int N, X;
string word;

int main()
{	
	cin >> N >> X;

	if (N > X || N * 26 < X)
	{
		cout << "!";
		return 0;
	}

	for (int i = 0; i < N; i++)
		word += 'A';

	X -= N;

	for (int i = N - 1; i >= 0; i--)
	{
		int m_s = min(X, 25);
		word[i] += m_s;
		
		X -= m_s;

		if (m_s == 0)
			break;
	}

	cout << word;
}