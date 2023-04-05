#include <iostream>
#include <map>
#include <vector>
#include <queue>
#include <set>
#include <algorithm>
#include <cmath>
using namespace std;

const long long INF = 2e+18;
long long N, M, b, ans = INF;

int main(){
  cin >> N >> M;

  for(long long a=1;a<=N;a++){
		b=(M+a-1)/a; // b = [M/a]
		if(b<=N)ans=min(ans,a*b);
		if(a>b)break;
	}
	if(ans==INF)cout<<-1<<endl;
	else cout<<ans<<endl;

  return 0;
}

