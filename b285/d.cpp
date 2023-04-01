#include <iostream>
#include <map>
#include <vector>
#include <queue>
#include <set>
#include <algorithm>
#include <cmath>
using namespace std;

int N, id = 0;
map<string, int> mp;
int group[200009];

// xが所属するグループの番号を見つける
int find(int x){
  if( x == group[x]) return x;
  return group[x] = find(group[x]);
}

// ２つのグループを統合する
void merge(int x, int y){
  x = find(x);  y = find(y);
  group[x] = y;
}

int main(){
  cin >> N;
  // 初期化
  for(int i=0; i<=2e5; i++)
    group[i] = i;
  
  for(int i=0; i<N; i++){
    string S, T;
    cin >> S >> T;
    if(!mp[S]) mp[S] = ++id;
    if(!mp[T]) mp[T] = ++id;
    // 同じグループのものがある => 閉路
    if(find(mp[S]) == find(mp[T])){
      cout << "No" << endl;
      return 0;
    }
    merge(mp[S], mp[T]);
  }

  cout << "Yes" << endl;

  return 0;
}

