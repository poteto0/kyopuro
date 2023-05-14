#include <iostream>
#include <map>
#include <vector>
#include <queue>
#include <set>
#include <algorithm>
#include <cmath>
using namespace std;

int N, t = 0, a = 0;

int main(){
  cin >> N;
  for(int i=0; i<N; i++){
    char win;
    cin >> win;
    if(win == 'T') t++;
    if(win == 'A') a++;
    if(t >= (N+1)/2){
      cout << "T" << endl;
      return 0;
    }
    if(a >= (N+1)/2){
      cout << "A" << endl;
      return 0;
    }
  }
  
  return 0;
}