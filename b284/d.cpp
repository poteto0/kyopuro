#include <iostream>
#include <map>
#include <vector>
#include <queue>
#include <set>
#include <algorithm>
#include <cmath>
using namespace std;

int T;

int main(){
  cin >> T;

  for(int i=0; i<T; i++){
    long long N, a, p, q;
    cin >> N;

    // 2 ~ 210万を探索する
    for(long long j=2; j<=2100000; j++){
      if(N%j == 0){
        a = j;
        N /= a;
        break;
      }
    }

    // 割り切れた数字はpかqに当たる
    // aがpの時
    if(N%a == 0){
      p = a;
      q = N / a;
    }
    else { // aがqの場合
      q = a;
      p = sqrt(N);
    }

    cout << p << " " << q << endl;
  }

  return 0;
}
