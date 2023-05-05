#include <iostream>
#include <map>
#include <vector>
#include <queue>
#include <set>
#include <algorithm>
#include <cmath>
using namespace std;

int N, K;
long long L, A[100009];

bool check(int x){
  long long num = 0; // 何個に切れたか
  long long pre = 0; // 前回の切れ目
  for(int i=0; i<N; i++){
    // x以上できる
    if(A[i] - pre >= x){
      num++;
      pre = A[i];
    }
  }
  // 最後のピースが x 以上なら加算
  if (L - pre >= x) ++num;

  return (num >= K + 1);
}

int main(){
  cin >> N >> L;
  cin >> K;
  for(int i=0; i<N; i++)
    cin >> A[i];

  // 2分探索
  // left以上で全てを分けられる
  // right以上では分けられない
  long long left = -1, right = L+1;
  // rightとleftの差が1になれば終了
  while(right - left > 1){
    long long mid = (left + right)/2;
    // mid以上で分けることが可能ならleftに代入
    if(check(mid)) left = mid;
    else right = mid;
  }

  cout << left << endl;

  return 0;
}