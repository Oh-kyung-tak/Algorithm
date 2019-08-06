#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

string word;
char s_ans[3] = { 'A','B','C' };
char c_ans[4] = { 'B','A','B','C' };
char h_ans[6] = { 'C','C','A','A','B','B' };

int s_score = 0, c_score = 0, h_score = 0;
int N;
int max_score = -1;

int main()
{
	cin >> N;
	cin >> word;

	for (int i = 0; i < word.size(); i++)
	{
		if (word[i] == s_ans[i % 3])
			s_score++;

		if (word[i] == c_ans[i % 4])
			c_score++;

		if (word[i] == h_ans[i % 6])
			h_score++;
	}

	max_score = max({ s_score, c_score, h_score });

	cout << max_score << endl;

	if (max_score == s_score)
		cout << "Adrian" << endl;
	if (max_score == c_score)
		cout << "Bruno" << endl;
	if (max_score == h_score)
		cout << "Goran" << endl;
}