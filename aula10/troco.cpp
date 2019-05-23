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

const int N = 1000 + 5;
int n, m;
int notas[N];
int memo[N][N];

int calc(int id, int troco){
	if(troco == 0) return 1;
	if(troco < 0) return 0;
	if(id >= n) return 0;

	if(memo[id][troco] != -1){
		return memo[id][troco];
	}

	int L = calc(id, troco-notas[id]);
	int R = calc(id+1, troco);

	if(L == 1 or R == 1) return memo[id][troco] = 1;
	else return memo[id][troco] = 0;
}

int main() {
	ios_base::sync_with_stdio(false);

	cin >>n >>m;	     
	
	for(int i = 0; i < n; i++){
		cin >>notas[i];
	}

	memset(memo, -1, sizeof memo);

	cout <<(calc(0, m) == 1? 'S':'N') <<endl;

	return 0;
}

