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

string a, b;
stack<char> a_word, b_word;
string a_result, b_result;
int min_size = 0;

int main()
{
	cin >> a >> b;
	min_size = min(a.size(), b.size());

	for (int i = 0; i < a.size(); i++)
		a_word.push(a[i]);
	
	for (int i = 0; i < b.size(); i++)
		b_word.push(b[i]);

	for (int i = 0; i < min_size; i++)
	{
		char a_t = a_word.top();
		char b_t = b_word.top();

		a_word.pop();
		b_word.pop();

		if (a_t > b_t)
			a_result += a_t;
		else if (a_t < b_t)
			b_result += b_t;
		else
		{
			a_result += a_t;
			b_result += b_t;
		}
	}

	while (!a_word.empty())
	{
		a_result += a_word.top();
		a_word.pop();
	}

	while (!b_word.empty())
	{
		b_result += b_word.top();
		b_word.pop();
	}

	if (a_result.size() == 0)
		cout << "YODA" << endl;
	else
	{
		string w;
		for (int i = a_result.size() - 1; i >= 0; i--)
			w += a_result[i];
		cout << stoi(w) << endl;
	}

	if (b_result.size() == 0)
		cout << "YODA" << endl;
	else
	{
		string w;
		for (int i = b_result.size() - 1; i >= 0; i--)
			w += b_result[i];
		cout << stoi(w) << endl;
	}
}