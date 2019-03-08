#include <stdio.h>
#include <map>
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

map<string, int> m;

string str[100000];
string str1;

int main() {
	int n, i;
	scanf("%d", &n);

	for (i = 0; i < n; i++) 
		cin >> str[i], m[str[i]]++;
	for (i = 0; i < n - 1; i++) 
		cin >> str1, m[str1]--;
	for (i = 0; i < n; i++) {
		if (m[str[i]] == 1) {
			cout << str[i];
			break;
		}
	}
	return 0;
}
