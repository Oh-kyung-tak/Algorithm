#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;
int N;
string word;
int sum = 0;

int main()
{
	cin >> word;

	for (int i = 0; i < word.size(); i++)
		cout << (word[i] - 'A') + 1 << " ";
}