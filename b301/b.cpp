#include <iostream>
#include <map>
#include <vector>
#include <queue>
#include <set>
#include <algorithm>
#include <cmath>
using namespace std;

int N, A[109];
vector<int> B;

int main(){
  cin >> N;
  for(int i=1; i<=N; i++) cin >> A[i];
  
  B.emplace_back(A[1]);
  for(int i=2; i<=N; i++){
    // 右の方が大きい時は段々増やす
    if(A[i] > A[i-1]){
      for(int a = A[i-1]+1; a <= A[i]; a++){
        B.emplace_back(a);
      }
    }
    if(A[i] < A[i-1]){
      for(int a = A[i-1]-1; a >= A[i]; a--){
        B.emplace_back(a);
      }
    }
  }

  for(int i=0; i<B.size()-1; i++) cout << B[i] << " ";
  cout << B.back() << endl;

  return 0;
}