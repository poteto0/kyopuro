#include <iostream>
#include <map>
#include <vector>
#include <queue>
#include <set>
#include <algorithm>
#include <cmath>
using namespace std;

int H, W;
char A[39][39], B[39][39];

int main(){
  cin >> H >> W;
  for(int i=0; i<H; i++){
    for(int j=0; j<W; j++){
      cin >> A[i][j];
    }
  }
  for(int i=0; i<H; i++){
    for(int j=0; j<W; j++){
      cin >> B[i][j];
    }
  }

  for(int s=0; s<W; s++){
    for(int t=0; t<H; t++){
      bool flag = true;
      for(int i=0; i<H; i++){
        for(int j=0; j<W; j++){
          flag &= (A[(i-t+H)%H][(j-s+W)%W] == B[i][j]);
        }
      }
      if(flag){
        cout << "Yes" << endl;
        return 0;
      }
    }
  }

  
  cout << "No" << endl;
  return 0;
}