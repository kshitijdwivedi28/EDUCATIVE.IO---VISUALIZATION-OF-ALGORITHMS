#include <queue>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

struct BFSInfo {
  BFSInfo(int _distance = -1,
          int _predecessor = -1) {
    distance = _distance;
    predecessor = _predecessor;
  }
  
  int distance;
  int predecessor;
};

vector<BFSInfo>
doBFS(vector<vector<int>> graph,
      int source) {
  vector<BFSInfo> bfsInfo(graph.size());
  
  bfsInfo[source].distance = 0;

  queue<int> q;
  q.push(source);
  
  // Traverse the graph
  // for(auto value : graph)
  // {
  //   for(auto v : value)
  //       cout << v << " ";
      
  //   cout << endl;
  // }

  vector<bool> vis (graph.size(), false);
  vis[source] = true;

  // As long as the queue is not empty:
  //  Repeatedly dequeue a vertex u from the queue.
  //  
  //  For each neighbor v of u that has not been visited:
  //     Set distance to 1 greater than u's distance
  //     Set predecessor to u
  //     Enqueue v
  //
  //  Hint:
  //  use graph to get the neighbors,
  //  use bfsInfo for distances and predecessors

 // cout << " QUEUE : " << endl;

  while(!q.empty())
  {
    int u = q.front();
    q.pop();

   // cout << u << endl;

    for(auto v : graph[u])
    {
      if (vis[v] == false)
      {
        bfsInfo[v].distance = bfsInfo[u].distance + 1;
        bfsInfo[v].predecessor = u;

        q.push(v);
        vis[v] = true;
      }
    }
  }

  return bfsInfo;
}



