#include <bits/stdc++.h>
using namespace std;
class Graph {
	void DFSUtil(int v);
public:
	map<int, bool> visited;
	map<int, list<int> > adj;
	void addEdge(int v, int w);
	void DFS();
};
void Graph::addEdge(int v, int w)
{
	adj[v].push_back(w); // Add w to v�s list.
}
void Graph::DFSUtil(int v)
{
    visited[v] = true;
	cout << v << " ";
	list<int>::iterator i;
	for (i = adj[v].begin(); i != adj[v].end(); ++i)
		if (!visited[*i])
			DFSUtil(*i);
}
void Graph::DFS()
{
    for(auto i : adj)
		if (visited[i.first] == false)
			DFSUtil(i.first);
}
int main()
{
	Graph g;
	g.addEdge(0, 4);
	g.addEdge(4, 5);
	g.addEdge(5, 6);
	g.addEdge(6, 0);
	g.addEdge(1, 3);
	g.addEdge(3, 2);
    cout << "Following is Depth First Traversal \n";
	g.DFS();
    return 0;
}
