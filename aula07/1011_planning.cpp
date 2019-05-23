#include <bits/stdc++.h>
using namespace std;

const int N = 100 + 5;
int tipo[N];
int n, m;

bool pode(int day) {
	int qtd = 0;
	for(int i = 0; i < N; i++){
		qtd += (tipo[i]/day);
	}
	if(qtd >= n) return true;
	return false;
}

int buscaBinaria(){
	int right = 100;
	int left = 0;
	int mid;

	while(left < right){
		mid = (left+right)/2;
		if(pode(mid)){
			left = mid;
		} else {
			right = mid-1;
		}
	}

	return mid;
}

int main(){
	ios_base::sync_with_stdio(false);

	cin >>n >>m;
	for(int i = 0; i < m; i++){
		int v;
		cin >>v;
		tipo[v]++;
	}

	cout <<buscaBinaria() <<endl;

	return 0;
}
