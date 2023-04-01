#include <iostream>
#include <map>
#include <vector>
#include <queue>
#include <set>
#include <algorithm>
#include <cmath>
using namespace std;

int N, M, deg[200009];
vector<int> G[200009];
bool vs[200009];

int main(){
  cin >> N >> M;
  
  int ans = 0;
  for(int i=0; i<M; i++){
    int r, b;
    string s, t;
    cin >> r >> s >> b >> t;
    G[r].emplace_back(b);
    G[b].emplace_back(r);
    deg[r]++; deg[b]++;
  }

  int ans1 = 0, ans2 = 0;
  for(int i = 1; i<=N; i++){
    if(vs[i]) continue;
    bool flag = true;
    queue<int> Q;
    Q.push(i); vs[i] = true;
    while(!Q.empty()){
      int pos = Q.front(); Q.pop();
      for(int j=0; j<G[pos].size(); j++){
        int nex = G[pos][j];
        if(vs[nex]) continue;
        vs[nex] = true;
        Q.push(nex);
        flag &= (deg[nex] == 2);
      }
    }
    if(flag && deg[i] == 2)
      ans1++;
    else
      ans2++;
  }

  cout << ans1 << " " << ans2 << endl;
  
  return 0;
}