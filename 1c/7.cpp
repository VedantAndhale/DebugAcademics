#include <iostream>
#include <cstring>
#include <map>

#define MAX_CITIES 100

class Graph {
private:
    int numVertices;
    int adjMatrix[MAX_CITIES][MAX_CITIES];
    std::map<std::string, int> cityToVertex;

public:
    Graph(int V) {
        numVertices = V;
        memset(adjMatrix, 0, sizeof(adjMatrix));
    }

    void addEdge(int src, int dest) {
        adjMatrix[src][dest] = 1;
        adjMatrix[dest][src] = 1;
    }

    void addCity(const std::string& city, int vertex) {
        cityToVertex[city] = vertex;
    }

    bool isConnected() {
        bool visited[MAX_CITIES] = { false };
        int count = 0;

        // Perform DFS traversal from a starting vertex
        dfs(0, visited, count);

        // If the count of visited vertices is equal to the total number of vertices, the graph is connected
        return count == numVertices;
    }

    int getVertex(const std::string& city) {
        if (cityToVertex.count(city) > 0) {
            return cityToVertex[city];
        } else {
            return -1; // Invalid vertex
        }
    }

private:
    void dfs(int v, bool visited[], int& count) {
        visited[v] = true;
        count++;

        for (int i = 0; i < numVertices; i++) {
            if (adjMatrix[v][i] && !visited[i]) {
                dfs(i, visited, count);
            }
        }
    }
};

int main() {
    int numCities, numFlights;
    std::cout << "Enter the number of cities: ";
    std::cin >> numCities;
    std::cout << "Enter the number of flights: ";
    std::cin >> numFlights;

    Graph graph(numCities);

    std::cout << "Enter the names of cities:\n";
    for (int i = 0; i < numCities; i++) {
        std::string city;
        std::cout << "City " << i + 1 << ": ";
        std::cin >> city;
        graph.addCity(city, i);
    }

    std::cout << "Enter the flight paths (city A to city B):\n";
    for (int i = 0; i < numFlights; i++) {
        std::string cityA, cityB;
        std::cout << "Flight " << i + 1 << ": ";
        std::cin >> cityA >> cityB;

        int vertexA = graph.getVertex(cityA);
        int vertexB = graph.getVertex(cityB);

        if (vertexA != -1 && vertexB != -1) {
            graph.addEdge(vertexA, vertexB);
        } else {
            std::cout << "Invalid city names entered. Please try again.\n";
            return 1;
        }
    }

    if (graph.isConnected()) {
        std::cout << "The graph is connected.\n";
    } else {
        std::cout << "The graph is not connected.\n";
    }

    return 0;
}
