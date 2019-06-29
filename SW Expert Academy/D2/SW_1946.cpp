#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cstring>
using namespace std;
 
int T;

 
int main()
{
    cin >> T;
 
    for (int k = 1; k <= T; k++)
    {
		int N;
		string word;
		cin >> N;

		for (int i = 0; i < N; i++)
		{
			char alpa;
			int num;
			cin >> alpa >> num;

			for (int j = 0; j < num; j++)
				word += alpa;
		}

        cout << "#" << k << endl;
		for (int i = 0; i < word.size(); i++)
		{
			cout << word[i];
			if (i % 10 == 9)
				cout << endl;
		}
		cout << endl;
    }
}