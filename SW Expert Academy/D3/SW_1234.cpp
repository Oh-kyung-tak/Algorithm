#include <iostream>
#include <math.h>
#include <algorithm>
#include <string.h>
#include <string>
#include <vector>
#include <stack>

using namespace std;
int T, test_case;

int main(int argc, char** argv)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);


	for (test_case = 0; test_case < 10; test_case++)
	{
		int N;
		string word;
		string answer;
		stack<char> s;
		cin >> N >> word;

		for (int i = 0; i < word.size(); i++)
		{
			if (s.empty())
				s.push(word[i]);
			else
			{
				if (s.top() == word[i])
					s.pop();
				else
					s.push(word[i]);
			}
		}
		
		while (!s.empty())
		{
			answer += s.top();
			s.pop();
		}
		
		std::reverse(answer.begin(), answer.end());
		
			
		
		cout << "#" << test_case + 1 << " " << answer << endl;

	}

	return 0;
}