#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <string>
#include <string.h>
#include <math.h>
#include <set>

using namespace std;

int N;

int main()
{
	cin >> N;
	getchar();

	for (int i = 0; i < N; i++)
	{
		string word;
		getline(cin, word);
		
		if (word.substr(0, 10) == "Simon says")
			cout << word.substr(10) << endl;
		
	}
}

