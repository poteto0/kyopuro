#include <iostream>
#include <map>
#include <vector>
#include <queue>
#include <set>
#include <algorithm>
#include <cmath>
using namespace std;

long long A, B;

long long gcd_num(long long n1, long long n2){
  long long cnt = 0;
  while(n1>=1 && n2>=1){
    if(n1<n2){
      cnt += n2 / n1;
      n2 = n2 % n1;
    }
    else{
      cnt += n1 / n2;
      n1 = n1 % n2;
    }
    //cout << cnt << ": " << n1 << " " << n2 << endl;
  }

  return cnt;
}

int main(){
  cin >> A >> B;

  long long cnt = gcd_num(A,B);

  cout << cnt - 1 << endl;
  
  return 0;
}