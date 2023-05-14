#include <iostream>
#include <map>
#include <vector>
#include <queue>
#include <set>
#include <algorithm>
#include <cmath>
using namespace std;

int N;

void printVector(vector<char> strs){
  for(int i=0; i<strs.size(); i++) cout << strs[i];
  cout << endl;
}

bool check(vector<char> strs){
  int before = 0, after = 0;
  for(int i=0; i<strs.size(); i++){
    if(strs[i] == '(') before++;
    if(strs[i] == ')') after++;

    if(after > before) return false;
  }
  return true;
}

int main(){
  cin >> N;
  
  if(N%2 == 1) return 0;

  vector<char> strs;
  int mid = N/2;
  for(int i=1; i<=mid; i++) strs.emplace_back('(');
  for(int i=mid+1; i<=N; i++) strs.emplace_back(')');

  do {
    if(check(strs)) printVector(strs);
  } while (next_permutation(strs.begin(), strs.end()));

  return 0;
}