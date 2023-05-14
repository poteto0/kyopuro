#include <iostream>
#include <map>
#include <vector>
#include <queue>
#include <set>
#include <algorithm>
#include <cmath>
using namespace std;

string S, T;
int cnt[27][2];

int main(){
  for(int i=0; i<=26; i++){
    cnt[i][0] = 0;
    cnt[i][1] = 0;
  }

  cin >> S >> T;
  for(int i=0; i<S.size(); i++){
    if(S[i] == '@'){
      cnt[26][0]++;
      continue;
    }
    int id = S[i] - 'a';
    cnt[id][0]++;
  }

  for(int i=0; i<T.size(); i++){
    if(T[i] == '@'){
      cnt[26][1]++;
      continue;
    }
    int id = T[i] - 'a';
    cnt[id][1]++;
  }

  for(int i=0; i<=26; i++){
    if(cnt[i][0] == cnt[i][1]) continue;
    if(i == 0 || i == 19 || i == 2 || i == 14 || i == 3 || i == 4 || i == 17){
      if(cnt[i][0] > cnt[i][1]){
        int diff = cnt[i][0] - cnt[i][1];
        if(cnt[26][1] >= diff){
          cnt[26][1] -= diff;
          continue;
        }
      }
      if(cnt[i][1] > cnt[i][0]){
        int diff = cnt[i][1] - cnt[i][0];
        if(cnt[26][0] >= diff){
          cnt[26][0] -= diff;
          continue;
        }
      }
    }
    cout << "No" << endl;
    return 0;
  }

  cout << "Yes" << endl;

  return 0;
}