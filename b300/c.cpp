#include <iostream>
#include <map>
#include <vector>
#include <queue>
#include <set>
#include <algorithm>
#include <cmath>
using namespace std;

int H, W, S[109];
char C[109][109];
bool f[109][109];

int main(){
  for(int i=0; i<=100; i++)
    S[i] = 0;
  
  cin >> H >> W;
  for(int i=1; i<=H; i++){
    for(int j=1; j<=W; j++){
      cin >> C[i][j];
      f[i][j] = false;
    }
  }

  for(int i=1; i<=H; i++){
    int p = 0, q = 0;
    for(int j=1; j<=W; j++){
      if(f[i][j]) continue;
      if(C[i][j] == '#'){
        f[i][j] = true;
        p = i; q = j;
        while(true){
          p++; q++;
          if(C[p][q] != '#' || p == H || q == W){
            if(p == H || q == W) q++;
            int size = ((q-1) - j)/2;
            S[size]++;
            f[i][q-1] = true;
            f[i+size*2][j] = true;
            f[i+size*2][q-1] = true;
            f[i+size][j+size] = true;
            for(int k=i+1; k<=(i+size); k++){
              int diff = k - i;
              int l = j+diff;
              f[k][l] = true;
              int m = l+2*(size-diff);
              f[k][m] = true;

              if(k == (i+size)) break;
              int kk = k+2*(size-diff);
              f[kk][l] = true;
              f[kk][m] = true;
              
            }
            break;
          }
        }
      }
    }
  }

  int N = min(H, W);
  for(int i=1; i<N; i++){
    cout << S[i] << " ";
  }
  cout << S[N] << endl;

  
  return 0;
}