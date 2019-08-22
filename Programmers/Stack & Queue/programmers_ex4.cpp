#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
	int answer = 0;
	int sum = 0;
	int count = 0;
	
	queue<int> q;

	for (int i = 0; i < truck_weights.size(); i++)
	{
		int d = truck_weights[i];

		while (true)
		{
			if (q.empty())
			{
				q.push(d);
				count++;
				sum += d;
				break;
			}
			else if (q.size() == bridge_length)
			{
				sum -= q.front(); 
				q.pop();
			}
			else
			{
				if (sum + d > weight)
				{
					q.push(0);
					count++;
				}
				else
				{
					q.push(d);
					count++;
					sum += d;
					break;
				}
			}
		}
	}

	return count + bridge_length;
}