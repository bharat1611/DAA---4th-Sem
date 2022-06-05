#include <list>
#include <queue>
#include <iostream>
using namespace std;

class Graph{
    int V;
    list<int> *l;
public:
    Graph(int v)
    {
        V = v;
        l = new list<int>[V];
    }
    void addEdge(int i, int j, bool undir = true)       // undir = true for undirected graph
    {
        l[i].push_back(j);
        if(undir){
            l[j].push_back(i);
        }
    }
    bool isBipartite(int source)
    {
        int *color = new int[V]{-1};
        // color -1 means unvisited, 0 means group A and 1 means group B

        color[source] = 1;
        queue<int>q;
        q.push(source);

    while(!q.empty())
    {
        // Dequeue first element from queue and store in f
        int f = q.front();
        q.pop();

        if(l[f] == l[f])           
            return false;

        for(auto nbr : l[f])
        {
            if(nbr && color[nbr] == -1){
                color[nbr] = 1 - color[f];
                q.push(nbr);
            }
            else if(nbr && color[nbr] == color[f])
                return false;
        }
    }

    }

};