#include <iostream>
#include <map>
#include <vector>
#include <queue>
#include <set>
#include <algorithm>
#include <cmath>
using namespace std;

long long A, X, M;

long long modpow(long long a, long long b, long long m){
	long long p = a, Answer = 1;
	for(int i = 0; i < 70; i++){
		if((b & (1 << i)) != 0){ Answer *= p; Answer %= m; } // MODを計算する
		p *= p; p %= m; // 2^iを格納していく、// MODを計算する
	}
	return Answer;
}

long long mod_division(long long a, long long b, long long m){
	return (a * modpow(b, m - 2, m)) % m;
}

int main(){
  cin >> A >> X >> M;

  if(A==1)
    cout << X%M << endl;
  
  if(M == 1)
    cout << "0" << endl;

  long long ans = (modpow(A, X, M)-1);
  ans = mod_division(ans, A-1, M);

  cout << ans << endl;
  
  return 0;
}
