#include <iostream>
#include <map>
#include <vector>
#include <queue>
#include <set>
#include <algorithm>
using namespace std;

int N, Q, card[109];

int main(){
  for(int i=0; i<=100; i++)
    card[i] = 0;

  cin >> N >> Q;
  for(int i=0; i<Q; i++){
    int t, x;
    cin >> t >> x;
    if(t == 1)
        card[x]++;
    if(t == 2)
        card[x]+=2;
    if(t == 3)
        cout << (card[x] >= 2 ? "Yes" : "No") << endl;
  }

  return 0;
}
