#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	while (cin >> n && n > 0)
	{
		string s;
		getline(cin, s);             
		int answer = 0;        
		for (int i = 0; i < n; i++)
		{
			getline(cin, s);        
			while (answer < s.length() && s[answer] != ' ')
				answer++;
		}
		cout << answer + 1 << endl; 
	}

}