#include <iostream>
#include <map>
#include <vector>
#include <queue>
#include <set>
#include <algorithm>
#include <cmath>
using namespace std;

int H, W;
char S[109][109];

int main(){
  cin >> H >> W;
  for(int h=1; h<=H; h++){
    for(int w=1; w<=W; w++){
      cin >> S[h][w];
    }
  }
  for(int h=1; h<=H; h++){
    for(int w=1; w<=W; w+=2){
      if(S[h][w-1] == 'T' && S[h][w] == 'T'){
        S[h][w-1] = 'P'; S[h][w] = 'C';
      }
      if(S[h][w] == 'T' && S[h][w+1] == 'T'){
        S[h][w] = 'P'; S[h][w+1] = 'C';
      }
    }
  }

  for(int h=1; h<=H; h++){
    for(int w=1; w<=W; w++){
      cout << S[h][w];
    }
    cout << endl;
  }
  
  return 0;
}