#include<iostream>
#include<set>
#include<algorithm>
#include<string>
#include<string.h>
#include<vector>
#include<map>
#include<stack>
#include<math.h>

using namespace std;

int word1[27];
int word2[27];
int sum = 0;

string w1;
string w2;

int main()
{
	cin >> w1;
	cin >> w2;

	for (int i = 0; i < w1.size(); i++)
		word1[w1[i] - 'a']++;
	
	for (int i = 0; i < w2.size(); i++)
		word2[w2[i] - 'a']++;

	for (int i = 0; i < 26; i++)
		sum += abs(word1[i] - word2[i]);

	cout << sum << endl;
	
}
