#include <vector>
#include <map>
#include <algorithm>
#include <iostream>

using namespace std;

int N, P;
int W, L, G;
map<string, int> m;
int score = 0;
bool is_right = false;

int main()
{
	cin >> N >> P;
	cin >> W >> L >> G;

	//해킹으로 알아내는 경우
	for (int i = 0; i < P; i++)
	{
		string name, pos;
		cin >> name >> pos;

		if (pos == "W")
			m[name] = 1;
		else
			m[name] = 2;
	}

	for (int i = 0; i < N; i++)
	{
		string name;
		cin >> name;

		if (m[name] == 0 || m[name] == 2)
		{
			score -= L;
			if (score < 0)
				score = 0;
		}
		else
		{
			score += W;
			if (score >= G)
				is_right = true;
		}
	}

	if (is_right)
		cout << "I AM NOT IRONMAN!!" << endl;
	else
		cout << "I AM IRONMAN!!" << endl;
}