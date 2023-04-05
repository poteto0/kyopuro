#include <iostream>
#include <map>
#include <vector>
#include <queue>
#include <set>
#include <algorithm>
#include <cmath>
using namespace std;

int N, son[500009][26], cnt[500009], id=0;
string S[500009];

void insert(string &str){
  int p=0; // 1文字前までのid
  for(int i=0; i<str.size(); i++){
    int u = (int) (str[i] - 'a');
    // 新たな並びにidを振る
    // → 新しいノードを挿入する
    if(!son[p][u]) son[p][u] = ++id;
    p = son[p][u]; // ここまでのidをpに代入
    cnt[p] ++; // idの登場回数
  }
}

int search(string &str){
  int p=0, ans=0;
  for(int i=0; i<str.size(); i++){
    int u = (int) (str[i] - 'a');
    p = son[p][u];
    if(cnt[p] < 2) return ans;
    ans++;
  }
  return ans;
}

int main(){
  cin >> N;
  for(int i=0; i<N; i++){
    cin >> S[i];
    insert(S[i]);
  }

  for(int i=0; i<N; i++){
    int ans = search(S[i]);
    cout << ans << endl;
  }
  
  return 0;
}