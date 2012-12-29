#include<iostream>
#include <list>
#include<stack>

using namespace std;

// Graph class represents a directed graph using adjacency list representation
class Graph
{
    int V;    // No. of vertices
    list<int> *adj;    // Pointer to an array containing adjacency lists
    void DFSUtil(int v, bool visited[], int j,stack<int> &A);// A function used by DFS
public:
    Graph(int V);   // Constructor
    void addEdge(int v, int w);   // function to add an edge to graph
    void DFS(int v);    // DFS traversal of the vertices reachable from v
};

Graph::Graph(int V)
{
    this->V = V;
    adj = new list<int>[V];
}

void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w); // Add w to v’s list.
}

void Graph::DFSUtil(int v, bool visited[], int j, stack<int> &A)
{
    // Mark the current node as visited and print it
    visited[v] = true;
    cout << v << " "<<endl;
    j+=v;
    A.push(j);
 
    

    // Recur for all the vertices adjacent to this vertex
    list<int>::iterator i;
    for(i = adj[v].begin(); i != adj[v].end(); ++i)
        if(!visited[*i]){
                         //cout<<"!visited[*"<<*i<<"]: "<<visited[*i]<<endl;
            DFSUtil(*i, visited,j,A);}
            
}

// DFS traversal of the vertices reachable from v. It uses recursive DFSUtil()
void Graph::DFS(int v)
{    stack<int> A;
      // Mark all the vertices as not visited
    bool *visited = new bool[V];
    for(int i = 0; i < V; i++)
        visited[i] = false;
        int j = 0;
    // Call the recursive helper function to print DFS traversal
    DFSUtil(v, visited, j, A);
    while(!A.empty()){
    cout<<A.top()<<endl;
    A.pop();
}
}

int main()
{
    // Create a graph given in the above diagram
    Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);

    cout << "Following is Depth First Traversal (starting from vertex 2) \n";
    g.DFS(2);
    system("pause");
    return 0;
}
