#include <iostream>
#include <map>
#include <vector>
#include <queue>
#include <set>
#include <algorithm>
#include <cmath>
using namespace std;

int N, K, Q;
long long A[200009], S[12][200009];

int main(){
  cin >> N >> K;
  for(int i=1; i<=N; i++)
    cin >> A[i];

  for(int i=0; i<K; i++){
    for(int j=1; j<=N; j++){
      S[i][j] = S[i][j-1] + ((j%K==i) ? A[j] : 0);
    }
  }

  cin >> Q;
  for(int i=0; i<Q; i++){
    int l, r;
    cin >> l >> r;
    long long C = S[0][r] - S[0][l-1];
    bool flag = true;
    for(int j=1; j<K; j++){
      flag &= (C == (S[j][r] - S[j][l-1]));
    }

    cout << (flag ? "Yes" : "No") << endl;
  }
  
  return 0;
}

