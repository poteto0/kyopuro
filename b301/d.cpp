#include <iostream>
#include <map>
#include <vector>
#include <queue>
#include <set>
#include <algorithm>
#include <cmath>
using namespace std;

string S;
long long N;
long long min_num = 0;

int main(){
  cin >> S >> N;

  for(int i=0; i<S.size(); i++){
    long long k = S.size() - i - 1;

    if(S[i] == '1'){
      min_num += 1LL << k;
    }
  }

  if(min_num > N){
    cout << "-1" << endl;
    return 0;
  }

  long long eta = min_num;
  for(int j=S.size(); j>=0; j--){
    if(S[S.size()-j] == '?'){
      if((eta + (1LL << (j-1))) <= N){
        eta += (1LL << (j-1));
      }
    }
  }

  cout << eta << endl;

  return 0;
}