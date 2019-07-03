#include <iostream>
#include <cstring>

using namespace std;
const int MAX = 25;

char str[MAX];

int main() {

	int T;
	scanf("%d", &T);

	for (int tc = 1; tc <= T; tc++) {
		scanf("%s", str);

		int s = 0;
		int e = strlen(str) - 1;

		bool flag = true;
		while (s < e) {

			if (str[s] == '*' && str[s] == str[e]) break;

			if (str[s] == str[e]) {
				s++;
				e--;
			}
			else if (str[s] != '*' && str[e] != '*' && str[s] != str[e]) {
				flag = false;
				break;
			}
			else if (str[s] == '*') {
				e--;
			}
			else if (str[e] == '*') {
				s++;
			}
		}

		if (flag) {
			printf("#%d Exist\n", tc);
		}
		else {
			printf("#%d Not exist\n", tc);
		}
	}

	return 0;
}