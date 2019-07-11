#include <iostream>
#include <queue>

using namespace std;

struct Node {
	int start;
	int end;
	long long int weight;
};

bool operator<(Node a, Node b) {
	return a.weight > b.weight;
}

int main()
{

	int m, n;

	while (1) {
		cin >> m >> n;
		if (m == 0 && n == 0) break;
		long long int max = 0, min = 0;
		vector<vector<Node>> vv(m);
		for (int i = 0; i < n; i++) {
			Node node;
			cin >> node.start >> node.end >> node.weight;

			max += node.weight;
			vv[node.start].push_back(node);

			int temp = node.start;
			node.start = node.end;
			node.end = temp;
			vv[node.start].push_back(node);
		}

		vector<bool> visited(m);

		priority_queue<Node> pq;
		for (int i = 0; i < vv[0].size(); i++) {
			pq.push(vv[0][i]);
		}
		visited[0] = true;

		while (!pq.empty()) {
			Node temp = pq.top();
			pq.pop();


			if (!visited[temp.end]) {
				min += temp.weight;
				for (int i = 0; i < vv[temp.end].size(); i++) {
					pq.push(vv[temp.end][i]);
				}
				visited[temp.end] = true;
			}
		}

		cout << max - min << endl;
	}
	return 0;
}