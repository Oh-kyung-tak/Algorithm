#include<iostream>
#include<string>
#include<list>

using namespace std;

int main() {
	int num;
	string str; 

	cin >> str;
	cin >> num;

	list<char> editor(str.begin(), str.end()); 
	auto cursor = editor.end();

	for(int i = 0; i < num; i++)
	{
		char cmd;
		cin >> cmd; 

		if (cmd == 'L') 
		{
			if (cursor != editor.begin()) 
				cursor--;
		}
		else if (cmd == 'D') 
		{
			if (cursor != editor.end()) 
				cursor++;
		}
		else if (cmd == 'B') 
		{
			if (cursor != editor.begin()) 
			{
				cursor--;
				cursor = editor.erase(cursor);
			}
		}
		else if (cmd == 'P') 
		{
			char x;
			cin >> x;
			editor.insert(cursor, x);
		}
	}

	for (auto &x : editor) 
	{
		cout << x;
	}
}
