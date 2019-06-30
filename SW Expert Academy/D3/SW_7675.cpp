#include <iostream>
#include <algorithm>
#include <string.h>
#include <string>
#include <queue>

using namespace std;

int N;
string word;
bool ck = true;
int cnt = 0;
int w_cnt = 0;

int main()
{
	scanf("%d", &N);

	for (int Test_case = 1; Test_case <= N; Test_case++)
	{
		vector<int> v;
		int num;
		char i;
		scanf("%d", &num);

		w_cnt = 0;

		while ((i = cin.get()) != EOF)
		{
			if (i == '!' || i == '?' || i == '.')
			{
				word.erase(std::remove(word.begin(), word.end(), ' '), word.end());
				for (int k = 0; k < word.size(); k++)
				{
					if (k == 0)
					{
						if (word[k] < 'A' || word[k] > 'Z')
						{
							ck = false;
							break;
						}
					}
					else
					{
						if (word[k] < 'a' || word[k] > 'z')
						{
							ck = false;
							break;
						}
					}
				}

				if (ck == true)
					cnt++;
				else
					ck = true;

				word = "";

				if (w_cnt == 0)
					v.push_back(cnt);
				else
					v.push_back(cnt - 1);
				cnt = 0;
				w_cnt++;
			}
			else
			{
				if (i == ' ' || i == '\n')
				{
					word.erase(std::remove(word.begin(), word.end(), ' '), word.end());
					for (int k = 0; k < word.size(); k++)
					{
						if (k == 0)
						{
							if (word[k] < 'A' || word[k] > 'Z')
							{
								ck = false;
								break;
							}
						}
						else
						{
							if (word[k] < 'a' || word[k] > 'z')
							{
								ck = false;
								break;
							}
						}
					}

					if (ck == true)
						cnt++;
					else
						ck = true;

					word = "";
				}
				else
					word += i;
			}

			if (w_cnt == num)
				break;
		}

		cout << "#" << Test_case << " ";
		for (int k = 0; k < v.size(); k++)
			cout << v[k] << " ";
		cout << endl;
	}

	return 0;
}