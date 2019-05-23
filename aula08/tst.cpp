#include <bits/stdc++.h>
using namespace std;

#define pb push_back

const int N = 100 + 5;
bool visitado[N];
vector <int> g[N];

int dfs(int at){
	visitado[at] = true;

	int qtd = 0;

	for(int viz:g[at]){
		if(visitado[viz] == 0){
			qtd += dfs(viz);
		}
	}

	return qtd+1;
}

int main(){
	ios_base::sync_with_stdio(false);

	int n, m;
	cin >>n >>m;

	for(int i = 0; i < m; i++){
		int a, b;
		cin >>a >>b;
		g[a].pb(b);
		g[b].pb(a);
	}

	cout <<dfs(1) <<endl;

	return 0;
}
