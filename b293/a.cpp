#include <iostream>
#include <map>
#include <vector>
#include <queue>
#include <set>
#include <algorithm>
#include <cmath>
using namespace std;

string S;

int main(){
  cin >> S;

  for(int i=0; i<(S.length())/2; i++){
    int i1 = 2*i, i2 = 2*i+1;
    char swap = S[i1];
    S[i1] = S[i2];
    S[i2] = swap;
  }

  cout << S << endl;
  
  return 0;
}