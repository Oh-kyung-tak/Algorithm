#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

string word;
string temp;

int cnt = 0;

int main()
{
	getline(cin, word);
	getline(cin, temp);

	int w_size = word.size();
	int t_size = temp.size();

	for (int i = 0; i <= w_size - t_size; i++)
	{
		if (word.substr(i, t_size) == temp)
		{
			i += t_size - 1;
			cnt++;
		}
	}

	cout << cnt << endl;
}