#include <iostream>
#include <map>
#include <vector>
#include <queue>
#include <set>
#include <algorithm>
#include <cmath>
using namespace std;

int N, M;
vector<int> G[2009];

int main(){
  cin >> N >> M;
  for(int i=0; i<M; i++){
    int u, v;
    cin >> u >> v;
    G[u].emplace_back(v);
  }

  // ある頂点から到達可能な頂点数 - 辺の数
  // 頂点xから距離2の頂点へ有向辺を足してもxから到達できる頂点数は変化しない
  // また、元々距離3であった点が距離2となる
  int ans = 0;
  for(int i=1; i<=N; i++){
    // 深さ優先探索で、到達可能超点数を探る
    vector<bool> vs(N,false);
    queue<int> Q; Q.push(i); vs[i] = true;
    while(!Q.empty()){
      int pos = Q.front(); Q.pop();
      for(int j=0; j<G[pos].size(); j++){
        int next = G[pos][j];
        if(vs[next]) continue;
        vs[next] = true;
        Q.push(next);
        ans++;
      }
    }
  }

  cout << ans - M << endl;
  
  return 0;
}