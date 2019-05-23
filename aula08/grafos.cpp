#include <bits/stdc++.h>
using namespace std;

#define pb push_back

const int N = 100 + 5;
bool visitado[N];
vector <int> g[N];

void dfs(int at){
	visitado[at] = true;
	cout <<at <<endl;

	for(int i = 0; i < g[at].size(); i++){
		int viz = g[at][i];
		if(visitado[viz] == 0){
			dfs(viz);
		}
	}

	return;
}

int main(){
	ios_base::sync_with_stdio(false);

	const int N = 100 + 5;

	int n, m;
	cin >>n >>m;

	for(int i = 1; i <= m; i++){
		int a, b;
		cin >>a >>b;
		g[a].pb(b);
		g[b].pb(a);
	}

	for(int i = 1; i <= n; i++){
		if(visitado[i] == 0){
			cout <<"chamando dfs: " <<i <<endl;
			dfs(i);
		}
	}

	dfs(1);

	/*
	for(int i = 1; i <= n; i++){
		cout <<i <<"-> ";
		for(int j = 0; j < g[i].size(); j++){
			cout <<g[i][j] <<" ";
		}
	}
	*/

	return 0;
}
