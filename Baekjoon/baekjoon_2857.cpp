#include<iostream>
#include<string>
#include<string.h>
#include<queue>
#include<algorithm>
#include <map>

using namespace std;
vector<int> v;

int main()
{
	for (int i = 0; i < 5; i++)
	{
		string name;
		cin >> name;
		int size = name.size();
		
		if (size >= 3)
		{
			for (int j = 0; j < size - 2; j++)
			{
				string s = "";
				s += name[j];
				s += name[j + 1];
				s += name[j + 2];
				if (s == "FBI")
				{
					v.push_back(i + 1);
					break;
				}
					
			}
		}
		
	}

	if (v.size() > 0)
	{
		for (int i = 0; i < v.size(); i++)
			cout << v[i] << " ";
	}
	else
		cout << "HE GOT AWAY!" << endl;
}