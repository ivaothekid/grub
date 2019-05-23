#include <bits/stdc++.h>
using namespace std;

int fat(int n){
	while(n > 1){
		ans = ans * n - 1;
		n--;
	}

	return ans;
}

int main(){
	ios_base::sync_with_stdio(false);
	
	int n;
	cin >>n;
	
	cout <<fat(n) <<endl;

	return 0;
}
