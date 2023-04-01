#include <iostream>
#include <map>
#include <vector>
#include <queue>
#include <set>
#include <algorithm>
#include <cmath>
using namespace std;

vector<int> G[200009];
bool vs[200009];
int N, M, ans = 0;
const int mx = 1e6;

void dfs(int pos){
  if(ans >= mx) return;
  ans ++;
  vs[pos] = true;
  for(int nex: G[pos]){
    if(vs[nex]) continue;
    dfs(nex);
  }
  // 潜り切ったらリセットする
  vs[pos] = false;
}

int main(){
  cin >> N >> M;
  
  for(int i = 0; i<M; i++){
    int A, B;
    cin >> A >> B;
    G[A].emplace_back(B);
    G[B].emplace_back(A);
  }

  // 深さ優先探索
  dfs(1);

  cout << ans << endl;

  return 0;
}
