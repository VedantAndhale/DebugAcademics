#include <iostream>
using namespace std;
#define MAX 20
#define TRUE 1
#define FALSE 0

class Gdfs
{
private:
    int g[MAX][MAX], v[MAX];
    int v1, v2;

public:
    int n;
    static int node_count;
    Gdfs();
    void create(), display();
    void Dfs(int);
    ~Gdfs();
};
Gdfs::Gdfs()
{
    for (v1 = 0; v1 < MAX; v1++)
        v[v1] = FALSE;
    for (v1 = 0; v1 < MAX; v1++)
        for (v2 = 0; v2 < MAX; v2++)
            g[v1][v2] = FALSE;
}
Gdfs::~Gdfs()
{
    for (v1 = 0; v1 < MAX; v1++)
    {
        for (v2 = 0; v2 < MAX; v2++)
            g[v1][v2] = FALSE;
    }
    for (v1 = 0; v1 < MAX; v1++)
        v[v1] = FALSE;
}
void Gdfs::display()
{
    for (v1 = 0; v1 < n; v1++)
    {
        for (v2 = 0; v2 < n; v2++)
            cout << " " << g[v1][v2];
        cout << endl;
    }
}
void Gdfs::create()
{
    int v1, v2;
    n = 0;
    do
    {
        cout << "\nEnter the Edge of a graph by two vertices \n";
        cout << "(and type -99 terminate)\n";
        cin >> v1 >> v2;
        if (v1 == -99)
            break;
        if (v1 >= MAX || v2 >= MAX)
            cout << "Invalid Vertex Value\n";
        else
            g[v1][v2] = TRUE;
        g[v2][v1] = TRUE;
        n++;
    } while (1);
}
void Gdfs::Dfs(int v1)
{
    int v2;
    cout << endl
         << v1;
    node_count++;
    v[v1] = TRUE;
    for (v2 = 0; v2 < n; v2++)
        if (g[v1][v2] == TRUE && v[v2] == FALSE)
            Dfs(v2);
}
int Gdfs::node_count = 0;

int main()
{
    Gdfs gr;
    int v1;
    gr.create();
    cout << "The Adjacency Matrix for the graph is " << endl;
    gr.display();
    cout << "Enter the Vertex from which you want to traverse: ";
    cin >> v1;
    if (v1 >= MAX)
        cout << "Invalid Vertex\n";
    cout << "The Depth First Search of the Graph is " << endl;
    gr.Dfs(v1);
    cout << "\n Total Number of Nodes in Graph = " << Gdfs::node_count<<endl;
    return 0;
}