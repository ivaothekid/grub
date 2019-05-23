#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);

	string s;
	cin >> s;

	for(int i = 0; i < s.size(); i++){
		cout << s[s.size()-1-i];
	}
	cout << endl;

	return 0;
}
