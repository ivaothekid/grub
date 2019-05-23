#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define eb emplace_back
#define mk make_pair
#define fi first
#define se second
#define cc(x)	cout << #x << " = " << x << endl
#define ok		cout << "ok" << endl
#define endl '\n'

typedef long long ll;
typedef pair<int,int> ii;
const int INF = 0x3f3f3f3f;
const double PI = acos(-1.0);

const int N = 1e6 + 100;
ll dp[N];

ll fib(int i){
	if(i == 0 or i == 1) return i;
	if(dp[i] != -1) return dp[i];

	ll v = fib(i-1) + fib(i-2);
	dp[i] = v;

	return v;
}

int main() {
	ios_base::sync_with_stdio(false);

	int n; cin >>n;

	for(int i = 0; i < N; i++){
		dp[i] = -1;
	}

	dp[0] = 0;
	dp[1] = 1;

	cout <<fib(n) <<endl;
			     
	return 0;
}

