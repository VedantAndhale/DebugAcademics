#include <vector>
#include <iostream>
#include <string>
using namespace std;
class Vertex; // Forward reference of class Vertex
// Edge Class defined
class Edge
{
private:
    Vertex *source;
    Vertex *destination;
    int distance;

public:
    Edge(Vertex *s, Vertex *d, int dist)
    {
        source = s;
        destination = d;
        distance = dist;
    }
    Vertex *getSource()
    {
        return source;
    }
    Vertex *getDestination()
    {
        return destination;
    }
    int getDistance()
    {
        return distance;
    }
};
// Vertex Class defined
class Vertex
{
private:
    string city;
    vector<Edge> edges; // vector created for edges
public:
    Vertex(string name)
    {
        city = name;
    }
    void addEdge(Vertex *v, int dist)
    {
        Edge newEdge(this, v, dist); // creating object of Edge(source, destination, distance)
        edges.push_back(newEdge);    // creating adjacency List
    }
    void showEdge()
    {
        cout << "From "  << city << "to " << endl;
        for (int i = 0; i < (int)edges.size(); i++)
        {
            Edge e = edges[i];
            cout << e.getDestination()->getCity() << " requires " <<e.getDistance() << "hrs" << endl;
    }
    cout << endl;
} 

string getCity()
{
    return city;
}
vector<Edge> getEdges()
{
    return edges;
}
}
;
// Main class for Graph
class Graph
{
private:
    vector<Vertex *> v;

public:
    Graph() // constructor
    {
    }
    void insert(Vertex *val)
    {
        v.push_back(val);
    }
    void Display()
    {
        for (int i = 0; i < (int)v.size(); i++)
            v[i]->showEdge();
    }
};
int main()
{
    Graph g;
    // creating veritces or nodes for each city
    Vertex v1 = Vertex("Mumbai");
    Vertex v2 = Vertex("Pune");
    Vertex v3 = Vertex("Kolkata");
    Vertex v4 = Vertex("Delhi");
    // creating pointers to nodes
    Vertex *vptr1 = &v1;
    Vertex *vptr2 = &v2;
    Vertex *vptr3 = &v3;
    Vertex *vptr4 = &v4;
    // Attaching the nodes by adding edges
    v1.addEdge(vptr4, 2);
    v2.addEdge(vptr1, 1);
    v3.addEdge(vptr1, 3);
    v4.addEdge(vptr2, 2);
    v4.addEdge(vptr3, 3);
    // creating graph
    g.insert(vptr1);
    g.insert(vptr2);
    g.insert(vptr3);
    g.insert(vptr4);
    cout << "\n \t Displaying City Transport Map using Adjacency List" << endl;
    g.Display();
    return 1;
}