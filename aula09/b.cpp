#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);

	string s;
	cin >>s;

	for(int i = 0; i < s.size(); i++){
		if(s[i] == '0')
			s = s - '1';
	}
	cout <<s <<endl;
		
	return 0;
}
