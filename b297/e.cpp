#include <iostream>
#include <map>
#include <vector>
#include <queue>
#include <set>
#include <algorithm>
#include <cmath>
using namespace std;

long long N, K, A[12], ans[200009];

int main(){
  // 0円を一番安いと捉える(0番目)
  set<long long> Q = {0};
  ans[0] = 0; ans[1] = 0;
  cin >> N >> K;

  auto my_itr = Q.begin();
  int v_first = *my_itr;
  for(int i=1; i<=N; i++){
    cin >> A[i];
    Q.insert(v_first + A[i]);
  }

  auto itr = Q.begin();
  for(int i=2; i<=K+1; i++){
    if(ans[i-1] == *itr) ++itr; // 同じものがあったら次に安い要素を参照

    // 今一番安い値段(i番目に安い)
    long long v = *itr;
    ans[i] = v;

    // i番目に安い値段+一つ買った値段
    for(int i=1; i<=N; i++){
      Q.insert(v + A[i]); // setだからこれが安い順に格納される
    }
    
    // QのサイズがKを超えたら現在の最大値を消す
    // 参照しないデータだからメモリの使いすぎを防ぐ
    if(Q.size() > K+1){
      Q.erase(Q.size());
    }
  }

  cout << ans[K+1] << endl;

  return 0;
}