#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);

	const int N = 205;
	int m[N][N];

	int l, c;
	cin >> l >> c;

	for(int i = 0; i < l;  i++){
		for(int j = 0; j < c; j++){
			cin >> m[i][j];
		}
	}

	for(int i = 0; i < l;  i++){
		for(int j = 0; j < c; j++){
			cout << m[i][j] << ' ';
		}

		cout << endl;
	}
	return 0;
}
