#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);

	int n;
	cin >>n;
	vector<int> v;
	
	for(int i = 0; i < n; i++){
		int a;
		cin >>a;
		v.push_back(a);
	}

	int qtp;
	cin >>qtp;

	while(qtp--){
		int val;
		cin >>val;

		bool flag = false;
		for(int i = 0; i < v.size(); i++){
			if(v[i] == val){
				flag = true;
				break;
			}
		}
		if(flag) cout <<"SIM" <<endl;
		else cout <<"NAO" <<endl;
	}

	return 0;
}
