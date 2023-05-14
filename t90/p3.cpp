#include <iostream>
#include <map>
#include <vector>
#include <queue>
#include <set>
#include <algorithm>
#include <cmath>
using namespace std;

int N;
vector<int> G[100009];
bool vs[100009];
int max_score = -1, score[100009];
int now_score = 0;

void dfs(int pos, int s){
  if(vs[pos]) return;
  vs[pos] = true;
  score[pos] = s;
  now_score = max(now_score, s);

  for(int next: G[pos]) dfs(next, s+1);
}

int main(){
  cin >> N;
  for(int i=0; i<N-1; i++){
    int u, v;
    cin >> u >> v;
    G[u].emplace_back(v);
    G[v].emplace_back(u);
  }
  
  int mv = 0;
  dfs(1, 0);
  for(int i=1; i<=N; i++){
    if(now_score == score[i]){
      mv = i;
    }
  }

  score[mv] = 0;
  for(int j=1; j<=N; j++) vs[j] = false;
  dfs(mv, 0);
  max_score = max(now_score, max_score);

  cout << max_score+1 << endl;
  
  return 0;
}