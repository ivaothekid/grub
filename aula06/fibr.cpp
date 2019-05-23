#include <bits/stdc++.h>
using namespace std;

int cont = 0;

int fib(int n){
	if(n < 2) return n;
	cont += 2;
	return fib(n-1) + fib(n-2);
}

int main(){
	ios_base::sync_with_stdio(false);

	int n;
	cin >>n;

	cout <<fib(n) <<endl;
	cout <<cont <<endl;

	return 0;
}
