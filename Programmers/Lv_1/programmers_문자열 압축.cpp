#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int solution(string s) {
	int answer = s.length();
	int max_len = s.length() / 2;
	int s_len = s.length();
	int split_len = 1;

	while (split_len <= max_len) {

		string pre = s.substr(0, split_len);
		string temp;
		int size = 1;

		for (int i = split_len; i < s_len; i += split_len) {
			if (pre == s.substr(i, split_len))
				size++;
			else {
				if (size != 1)
					temp += to_string(size) + pre;
				else
					temp += pre;

				pre = s.substr(i, split_len);
				size = 1;
			
			}
		}
		
		if (size != 1)
			temp += to_string(size) + pre;
		else
			temp += pre;

		int t_len = temp.length();

		answer = min(answer, t_len);
		split_len++;
	}
	return answer;
}