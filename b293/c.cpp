#include <iostream>
#include <map>
#include <vector>
#include <queue>
#include <set>
#include <algorithm>
#include <cmath>
using namespace std;

int H, W;
long long A[12][12];
vector<int> G[1019];
vector<long long> mp(22);
int ans = 0;

bool search(long long key, int id){
  for(int i=0; i<id; i++)
    if(mp[i] == key) return true;
  return false;
}

void all_clear(){
  mp[0] = A[1][1];
  for(int i=1; i<22; i++)
    mp[i] = -1LL;
}

void dfs(int v) {
  if(v == (100*H+W)){ ans++;}
  else{
    // v から行ける各頂点 next_v について
    for(auto next_v : G[v]){  
      int h = next_v/100, w = next_v%100;
      int id = (h-1) + (w-1);
      if(search(A[h][w], id)) continue;
      mp[id] = A[h][w];
      dfs(next_v); // 再帰的に探索
    }
  }
}

int main(){
  cin >> H >> W;
  for(int i=1; i<=H; i++){
    for(int j=1; j<=W; j++){
      cin >> A[i][j];
      if(j != W)
        G[i*100+j].emplace_back(i*100+j+1); // 右
      if(i != H) 
        G[i*100+j].emplace_back((i+1)*100+j); // 下
    }
  }
  
  all_clear();
  dfs(101);

  cout << ans << endl;
  
  return 0;
}