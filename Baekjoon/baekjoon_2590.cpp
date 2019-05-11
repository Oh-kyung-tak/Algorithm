#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <string>

using namespace std;

int arr[6], board[6][6], cnt;
int main() {
	for (int i = 0; i <= 5; i++) scanf("%d", arr + i);
	while (1) {
		bool ch = true;
		for (int i = 0; i <= 5; i++) {
			if (arr[i]) ch = false;
			fill(board[i], board[i] + 6, 0);
		}
		if (ch) break;
		for (int k = 5; k >= 0; k--) {
			for (int i = 0; i<6 - k; i++) {
				for (int j = 0; j<6 - k; j++) {
					if (!arr[k]) break;
					bool c = true;
					for (int ii = i; ii <= i + k; ii++) {
						for (int jj = j; jj <= j + k; jj++) {
							if (board[ii][jj]) c = false;
						}
					}
					if (c) {
						for (int ii = i; ii <= i + k; ii++) {
							for (int jj = j; jj <= j + k; jj++) {
								board[ii][jj] = 1;
							}
						}
						arr[k]--;
					}
				}
			}
		}
		cnt++;
	}
	printf("%d", cnt);
}

