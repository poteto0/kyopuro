#include <iostream>
#include <map>
#include <vector>
#include <queue>
#include <set>
#include <algorithm>
#include <cmath>
using namespace std;

char A;

char trans(int x){
  switch(x){
    case 1:
      return 'a';
    case 2:
      return 'b';
    case 3:
      return 'c';
    case 4:
      return 'd';
    case 5:
      return 'e';
    case 6:
      return 'f';
    case 7:
      return 'g';
    case 8:
      return 'h';
    default:
      return 'a';
  }
}

int main(){
  for(int i=8; i>=1; i--){
    for(int j=1; j<=8; j++){
      char A;
      cin >> A;
      if(A == '*'){
        cout << trans(j) << i << endl;
        //return 0;
      }
    }
  }
  
  return 0;
}

