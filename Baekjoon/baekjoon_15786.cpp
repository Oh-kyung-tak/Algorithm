#include<iostream>
#include<set>
#include<algorithm>
#include<string>

using namespace std;

int n, m;
string word;

int main() 
{
	scanf("%d %d", &n, &m);

	cin >> word;

	while (m--)
	{
		int count = 0;

		string pass;

		cin >> pass;

		for (int i = 0; i < pass.size(); i++)
		{
			if (word[count] == pass[i])
				count++;
		}

		if (count == n)
			cout << "true" << endl;
		else
			cout << "false" << endl;
	}
}
