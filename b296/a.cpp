#include <iostream>
#include <map>
#include <vector>
#include <queue>
#include <set>
#include <algorithm>
#include <cmath>
using namespace std;

int N;
string S;

int main(){
  cin >> N;
  cin >> S;
  char chr;
  for(int i=0; i<S.length(); i++){
    if(chr == S[i]){
      cout << "No" << endl;
      return 0;
    }
    chr = S[i];
  }

  cout << "Yes" << endl;

  return 0;
}

