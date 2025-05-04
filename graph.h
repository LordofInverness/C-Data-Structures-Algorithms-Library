#ifndef GRAPH_H
#define GRAPH_H
#include <unordered_map>
#include <vector>
#include <queue>
#include <stack>
#include <set>
#include <iostream>
using namespace std;
class Graph {
private:
  unordered_map<int,vector<int>>adj_list;
  bool directed;
public:
  Graph(bool is_directed = false);
  void add_edge(int u, int v);
  void print() const;
  void bfs(int start) const;
  void dfs(int start) const;
private:
  void dfs_util(int node, set<int>& visited) const;
};
#endif
