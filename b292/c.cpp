#include <iostream>
#include <map>
#include <vector>
#include <queue>
#include <set>
#include <algorithm>
#include <cmath>
using namespace std;

long long N, nums[200009];

// 約数の個数を求める
long long yakusu_num(long long x){
  long long num = 0;
  for(long long i=1; i<=sqrt(x); i++){
    if(x%i == 0){
      if(i == sqrt(x)) num++;
      else num += 2;
    }
  }
  return num;
}

int main(){  
  cin >> N;

  // 約数の個数をそれぞれ求める
  for(long long i=1; i<=(1+N)/2; i++){
    nums[i] = yakusu_num(i);
    nums[N-i] = yakusu_num(N-i);
  }
  
  // 答えを求める
  long long ans = 0;
  for(long long i=1; i<N; i++){
    ans += nums[i] * nums[N-i];
  }

  cout << ans << endl;
  return 0;
}