/*
C++ program to run BFS on a Undirected Graph
Functional for both weighted and unweighted graphs
Contributed to Data-Science-Community-SRM on Github
Contributor: Santhosh-Vardhan
*/
#include <bits/stdc++.h>
using namespace std;
class graph
{
int v;
vector<pair<int,int>> *adj;//Adjacency list that holds both vertex and weights
public:
    graph(int ver)//When a graph is created, memory is allocated
    {
        v = ver;
        adj = new vector<pair<int,int>>[v+1];
    }
    void addEdge(int st, int nd, int wt);
    void BFS(int st);
};
void graph::addEdge(int st, int nd, int wt = 0)
{
    //If an unweighted graph is required, don't pass in third argument while adding edges
    adj[st].push_back(make_pair(nd,wt));//Adds the edges to the adjacency list
    adj[nd].push_back(make_pair(st,wt));
}
void graph::BFS(int st)//this bfs only prints the traversal, st - starting vertex
{
    deque<int> dq;//Queue for the BFS
    bool visited[v+1] = {false};//setting all visited to false
    dq.push_back(st);
    cout<<"--BFS--"<<endl;
    cout<<"STARTING VERTEX "<<st<<endl;
    while(!dq.empty())
        {
        visited[*dq.begin()]= true;
        for(auto it = adj[*dq.begin()].begin();it!=adj[*dq.begin()].end();it++)
            {
            int vert = (*it).first;//Storing the current node and weight in separate variables for readability
            int weit = (*it).second;
            if(visited[vert]==true)
            continue;
            else
            {
                cout<<"VERTEX :"<<vert<<endl;//Printing the vertex
            //  cout<<"WEIGHT :"<<weit<<endl;//Uncomment this if you want to print weights
                visited[vert] = true;
                dq.push_back(vert);
            }
        }
        dq.pop_front();//Removing the first vertex from Queue after performing BFS on it
    }
}
int main()
{
 //graph g(n); creates a graph with n vertices
}
