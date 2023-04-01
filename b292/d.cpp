#include <iostream>
#include <map>
#include <vector>
#include <queue>
#include <set>
#include <algorithm>
using namespace std;

int N, M;
vector<int> G[200009];
bool vs[200009];

int main(){
  cin >> N >> M;
  if(N != M){
    cout << "No" << endl;
    return 0;
  }
  for(int i=1; i<=M; i++){
    int u, v;
    cin >> u >> v;
    G[u].emplace_back(v);
    G[v].emplace_back(u);
  }

  for(int i=1; i<=N; i++){
    if(vs[i]) continue;
    queue<int> Q;
    Q.push(i); vs[i] = true;
    int n_num = 0, m_num = 0;
    while(!Q.empty()){
      n_num++;
      int pos = Q.front(); Q.pop();
      m_num += G[pos].size();
      for(int j=0; j<G[pos].size(); j++){
        int nex = G[pos][j];
        if(vs[nex]) continue;
        vs[nex] = true;
        Q.push(nex);
      }
    }
    if((n_num*2) != m_num){
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;
  return 0;
}