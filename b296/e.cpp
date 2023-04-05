#include <iostream>
#include <map>
#include <vector>
#include <queue>
#include <set>
#include <algorithm>
#include <cmath>
using namespace std;

int N;
int A[200009];
vector<int> G[200009];

int main(){
  cin >> N;
  for(int i=1; i<=N; i++){
    cin >> A[i];
    G[A[i]].push_back(i);
  }
  
  int ans = 0;
  for(int i=1; i<=N; i++){
    int dps[200009];
    queue<int> Q;
    Q.push(i); dps[i] = 1;
    while(!Q.empty()){
      bool fn = false;
      int pos = Q.front(); Q.pop();
      for(int j=0; j<G[pos].size(); j++){
        int nex = G[pos][j];
        Q.push(nex);
        int pre = dps[nex];
        dps[nex] = dps[pos] + 1;
        int diff = dps[nex] - pre;
        if(pre > 0 && i > 10000){
          ans ++;
          fn = true;
          break;
        }
        if(dps[nex] == (i+1)){
          ans ++;
          fn = true;
          break;
        }
      }
      if(fn) break;
    }
  }

  cout << ans << endl;

  return 0;
}