#include <iostream>
#include <algorithm>
#include <string>
#include <string.h>
#include <vector>
#include <set>
#define MAX 1001

using namespace std;

int num[10] = { 4,2,3,3,3,3,3,3,3,3 };

int main()
{
	while (1)
	{
		string word;
		int sum = 0;
		cin >> word;
		
		if (word == "0")
			return 0;

		for (int i = 0; i < word.size(); i++)
			sum += num[word[i] - '0'];
		
		sum += word.size() + 1;

		cout << sum << endl;
	}
}