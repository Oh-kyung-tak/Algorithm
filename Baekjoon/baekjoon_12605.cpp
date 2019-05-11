#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<string>
#include<vector>

using namespace std;

int main()
{
	int N;

	cin >> N;
	getchar();

	for (int i = 0; i < N; i++)
	{
		vector<string> v;
		
		string word;
		string s;

		getline(cin, word);

		for (int j = 0; j < word.size(); j++)
		{
			if (word[j] != ' ')
				s += word[j];
			else
			{
				v.push_back(s);
				s = "";
			}
		}
		
		v.push_back(s);

		printf("Case #%d: ", i + 1);

		for (int j = v.size() - 1; j >= 0; j--)
			cout << v[j] << " ";

		cout << endl;
	}
}
