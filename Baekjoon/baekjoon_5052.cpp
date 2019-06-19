#include <iostream>
#include <string.h>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string>
#include <string.h>
#include <queue>

//출력 형식 잘보기!!!
using namespace std;

int T;
int N;

bool solution(vector<string> phone_book)
{
	bool answer = true;

	sort(phone_book.begin(), phone_book.end());
	for (int i = 0; i < phone_book.size() - 1; i++)
	{
		int c_size = phone_book[i].size();
		int n_size = phone_book[i + 1].size();

		if (c_size < n_size)
		{
			string t_word;
			t_word = phone_book[i + 1].substr(0, c_size);
			if (phone_book[i] == t_word)
			{
				answer = false;
				break;
			}
		}
	}
	return answer;
}

int main()
{
	cin >> T;

	while (T--)
	{
		cin >> N;

		vector<string> p;
		p.clear();

		for (int i = 0; i < N; i++)
		{
			string word;
			cin >> word;
			p.push_back(word);
		}

		if (solution(p))
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
}