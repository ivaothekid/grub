#include <bits/stdc++.h>
using namespace std;

int fib(int n){
	const int N = 100 + 5;
	int	v[N];
	v[0] = 0;
	v[1] = 1;

	for(int i = 2; i <= n; i++){
		v[i] = v[i - 1] + v[i - 2];
	}

	return v[n];
}

int main(){
	ios_base::sync_with_stdio(false);
	
	int n;
	cin >>n;

	cout <<fib(n) <<endl;

	return 0;
}
