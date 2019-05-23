#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	
		vector <int> v;
		
		while(true){
			int n;
			cin >> n;
			
			if(n == -1) break;

			v.push_back(n);
		}

		sort(v.begin(), v.end());
		
		cout << v.size() << endl;

		for(int i = 0; i < v.size(); i++){
			cout << v[i] << ' ';
		}

		cout << endl;

	return 0;
}
