#include <string>
#include <iostream>

using namespace std;

bool visited[11][11][4];
int x = 5;
int y = 5;
int answer = 0;

bool check(int x, int y)
{
	if (x >= 0 && y >= 0 && x <= 10 && y <= 10)
		return true;

	return false;
}

int solution(string dirs)
{

	for (int i = 0; i < dirs.size(); i++)
	{
		if (dirs[i] == 'U')
		{
			y++;
			if (check(x, y))
			{
				if (!visited[x][y][0])
				{
					visited[x][y][0] = true;
					visited[x][y - 1][1] = true;
					answer++;
				}
			}
			else
				y--;
		}
		else if (dirs[i] == 'D')
		{
			y--;
			if (check(x, y))
			{
				if (!visited[x][y][1])
				{
					visited[x][y][1] = true;
					visited[x][y + 1][0] = true;
					answer++;
				}
			}
			else
				y++;
		}
		else if (dirs[i] == 'L')
		{
			x--;
			if (check(x, y))
			{
				if (!visited[x][y][2])
				{
					visited[x][y][2] = true;
					visited[x + 1][y][3] = true;
					answer++;
				}
			}
			else
				x++;
		}
		else
		{
			x++;
			if (check(x, y))
			{
				if (!visited[x][y][3])
				{
					visited[x][y][3] = true;
					visited[x - 1][y][2] = true;
					answer++;
				}
			}
			else
				x--;
		}
	}

	return answer;
}