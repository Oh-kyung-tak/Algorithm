#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main()
{
	int N;

	scanf("%d", &N);

	while (N--)
	{
		vector<int> v;
		string s1, s2;
		cin >> s1;
		cin >> s2;
		
		int len = s1.size();

		for (int i = 0; i < len; i++)
		{
			if (s1[i] <= s2[i])
				v.push_back(s2[i] - s1[i]);
			else
				v.push_back((s2[i] + 26) - s1[i]);
		}

		cout << "Distances: ";
		for (int i = 0; i < v.size(); i++)
			cout << v[i] << " ";

		cout << endl;
	}
}
