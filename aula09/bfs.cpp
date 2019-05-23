#include <bits/stdc++.h>
using namespace std;

#define pb push_back

const int N = 100 + 5;

vector<int> g[N];
bool visitado[N];

void bfs(int at){
	
	queue<int> q;
	q.push(at);

	while(q.empty() == 0){
		int no = q.front();
		q.pop();

		if(visitado[no])
			continue;

		visitado[no] = true;
		cout <<no <<endl;

		for(int i = 0; i < g[no].size(); i++){
			int viz = g[no][i];

			if(visitado[viz] == 0)
				q.push(viz);
		}
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);

	int v, a;
	cin >>v >>a;

	for(int i = 0; i < a; i++){
		int a, b;
		cin >>a >>b;

		g[a].pb(b);
		g[b].pb(a);
	}

	bfs(1);

	return 0;
}
