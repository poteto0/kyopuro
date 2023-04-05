#include <iostream>
#include <map>
#include <vector>
#include <queue>
#include <set>
#include <algorithm>
#include <cmath>
using namespace std;

int N; 
long long X, A[200009];
map<long long, int>mp;

int main(){
  cin >> N >> X;
  for(int i=0; i<N; i++){
    long long B;
    cin >> B;
    B += 1e9;
    A[i] = B;
    if(!mp[B]) mp[B] = 1;
  }

  for(int i=0; i<N; i++){
    long long C = A[i] - X;
    if(mp[C]){
      cout << "Yes" << endl;
      return 0;
    }
  }

  cout << "No" << endl;

  return 0;
}

