#include <bits/stdc++.h>
using namespace std;

bool comp(int a, int b){
	if(a > b) return true;
	else return false;
}
 
int main() {
	ios_base::sync_with_stdio(false);

	int v[10];

	int n;
	cin >> n;

	for(int i = 0; i < n; i++){
		cin >> v[i];
	}

	sort(v, v+n, comp);

	for(int i = 0; i < n; i++){
		cout << v[i] << ' ';
	}

	cout << endl;
			     
	return 0;
}
