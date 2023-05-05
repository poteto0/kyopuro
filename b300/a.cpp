#include <iostream>
#include <map>
#include <vector>
#include <queue>
#include <set>
#include <algorithm>
#include <cmath>
using namespace std;

int N, A, B;

int main(){
  cin >> N >> A >> B;
  for(int i=1; i<=N; i++){
    int C;
    cin >> C;
    if(A+B == C){
      cout << i << endl;
      return 0;
    }
  }
  
  return 0;
}