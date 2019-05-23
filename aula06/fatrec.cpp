#include <bits/stdc++.h>
using namespace std;

int fat(int n){
	if(n < 1) return 1;
			
	int ans;
	ans = n * fat(n-1);

	return ans;
}

int main(){
	ios_base::sync_with_stdio(false);

	int n;
	cin >>n;

	cout <<fat(n) <<endl;

	return 0;
}
