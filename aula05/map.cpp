#include <bits/stdc++.h>
using namespace std:

int main(){
	ios_base::sync_with_stdio(false);

		map <char, int> m;
		string s;

		for(auto at:s){
			m[at]++
		}
		
		int contPar = 0, contImpar = 0;
		for(auto at:m){
			if(at.second%2 == 0) contPar++;
			else contImpar++;
		}

		if(contImpar > 1) cout << "NO" << endl;
		else cout << "YES" << endl;

	return 0;
}
