#include <iostream>
#include <map>
#include <vector>
#include <queue>
#include <set>
#include <algorithm>
using namespace std;

int main(){
  string str;
  cin >> str;
  transform(str.begin(), str.end(), str.begin(), ::toupper);
  cout << str << endl;
  return 0;
}
