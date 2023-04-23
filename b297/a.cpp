#include <iostream>
#include <map>
#include <vector>
#include <queue>
#include <set>
#include <algorithm>
#include <cmath>
using namespace std;

int N;
long long D, T[109];

int main(){
  cin >> N >> D;
  cin >> T[0];
  for(int i=1; i<N; i++){
    cin >> T[i];
    long long diff = T[i] - T[i-1];
    if(diff <= D){
      cout << T[i] << endl;
      return 0;
    }
  }

  cout << "-1" << endl;
  return 0;
  
  return 0;
}

