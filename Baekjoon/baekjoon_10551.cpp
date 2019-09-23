#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <time.h>

using namespace std;

string word;
int input[8];

int main(void)
{
	cin >> word;

	for (int i = 0; i < word.size(); i++)
	{
		if (word[i] == '1' || word[i] == 'Q' || word[i] == 'A' || word[i] == 'Z')
			input[0]++;
		else if (word[i] == '2' || word[i] == 'W' || word[i] == 'S' || word[i] == 'X')
			input[1]++;
		else if (word[i] == '3' || word[i] == 'E' || word[i] == 'D' || word[i] == 'C')
			input[2]++;
		else if (word[i] == '4' || word[i] == 'R' || word[i] == 'F' || word[i] == 'V' || word[i] == '5' || word[i] == 'T' || word[i] == 'G' || word[i] == 'B')
			input[3]++;
		else if (word[i] == '6' || word[i] == 'Y' || word[i] == 'H' || word[i] == 'N' || word[i] == '7' || word[i] == 'U' || word[i] == 'J' || word[i] == 'M')
			input[4]++;
		else if (word[i] == '8' || word[i] == 'I' || word[i] == 'K' || word[i] == ',')
			input[5]++;
		else if (word[i] == '9' || word[i] == 'O' || word[i] == 'L' || word[i] == '.')
			input[6]++;
		else
			input[7]++;
	}

	for (int i = 0; i < 8; i++)
		cout << input[i] << endl;
}