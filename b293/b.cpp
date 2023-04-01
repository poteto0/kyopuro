#include <iostream>
#include <map>
#include <vector>
#include <queue>
#include <set>
#include <algorithm>
#include <cmath>
using namespace std;

int N, A[200009];
bool vs[200009];

int main(){
  cin >> N;
  for(int i=1; i<=N; i++)
    cin >> A[i];

  for(int i=1; i<=N; i++){
    if(!vs[i]) vs[A[i]] = true;
  }

  int ans = 0;
  for(int i=1; i<=N; i++){
    if(vs[i]) continue;
    ans ++;
  }

  cout << ans << endl;

  int cnt = 0;
  for(int i=1; i<=N; i++){
    if(vs[i]) continue;
    cnt++;
    cout << i;
    if(cnt != ans) cout << " ";
  }

  cout << endl;
  
  return 0;
}