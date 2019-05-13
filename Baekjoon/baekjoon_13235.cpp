#include<iostream>
#include<string>
#include<string.h>
#include<queue>
#include<algorithm>
#include <map>

using namespace std;

string word;
string reverse_word;

int main()
{ 
	cin >> word;
	reverse_word = word;
	reverse(reverse_word.begin(), reverse_word.end());

	if (word == reverse_word)
		cout << "true";
	else
		cout << "false";
}