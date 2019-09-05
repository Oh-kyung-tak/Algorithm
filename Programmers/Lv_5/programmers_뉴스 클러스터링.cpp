#include <string>
#include <map>
#include <set>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(string str1, string str2) {
	map<string, int> m;

	double cnt = 0;
	double du = 0;

	int answer = 0;
	
	transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
	transform(str2.begin(), str2.end(), str2.begin(), ::tolower);

	for (int i = 0; i < str1.size() - 1; i++)
	{
		if (str1[i] >= 'a' && str1[i] <= 'z' && str1[i + 1] >= 'a' && str1[i + 1] <= 'z')
		{
			m[str1.substr(i, 2)]++;
			cnt++;
		}
	}
	
	for (int i = 0; i < str2.size() - 1; i++)
	{
		if (str2[i] >= 'a' && str2[i] <= 'z' && str2[i + 1] >= 'a' && str2[i + 1] <= 'z')
		{
			cout << str2.substr(i, 2) << endl;
			if (m[str2.substr(i, 2)] > 0)
			{
				m[str2.substr(i, 2)]--;
				du++;
			}
			else
				cnt++;
		}
	}

	if (cnt != 0)
		answer = (du / cnt) * 65536;
	else
		answer = 65536;

	return answer;
}