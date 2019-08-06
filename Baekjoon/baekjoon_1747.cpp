#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <string>
#include <string.h>
#include <math.h>
#include <set>

using namespace std;

bool suso[2000000];
vector<int> v;
int N;

int main()
{
	suso[0] = true;
	suso[1] = true;
	
	for (int i = 2; i <= sqrt(2000000); i++)
	{
		if (!suso[i])
			for (int j = i * i; j <= 2000000; j += i)
				suso[j] = true;
	}
	
	cin >> N;

	while (1)
	{
		string word = to_string(N);
		string word1 = word;
		std::reverse(word1.begin(), word1.end());

		if (word1 == word && !suso[N])
		{
			cout << N << endl;
			return 0;
		}

		N++;
			
	}
}

