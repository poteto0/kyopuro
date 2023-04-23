#include <iostream>
#include <map>
#include <vector>
#include <queue>
#include <set>
#include <algorithm>
#include <cmath>
using namespace std;

string S;

bool is_ok_first(){
  int first_b = -1, second_b = -1;
  for(int i=0; i<8; i++){
    if(S[i] == 'B'){
      if(first_b < 0) first_b = i+1;
      else { second_b = i + 1; break;}
    }
  }
  if(first_b%2 != second_b%2) return true;
  return false;
}

bool is_ok_second(){
  int first_r = -1, second_r = -1, k = -1;
  for(int i=0; i<8; i++){
    if(S[i] == 'R'){
      if(first_r < 0) first_r = i+1;
      else { second_r = i + 1; break;}
    }
    if(S[i] == 'K'){
      k = i+1;
    }
  }
  if(first_r < k && k < second_r) return true;
  return false;
}

int main(){
  cin >> S;

  if(!is_ok_first()){
    cout << "No" << endl;
    return 0;
  }
  if(!is_ok_second()){
    cout << "No" << endl;
    return 0;
  }

  cout << "Yes" << endl;
  
  return 0;
}