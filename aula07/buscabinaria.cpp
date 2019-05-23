#include <bits/stdc++.h>
using namespace std;

int buscaBinaria(vector<int> v, int x){
	int left, right, mid;
	left = 0;
	right = v.size()-1;

	while(left <= right){
		mid = (left+right)/2;
		if(x == v[mid]){
			return 1;	
		}
		if(x > v[mid]){
			left = mid + 1;
		}
		if(x < v[mid]){
			right = mid - 1;
		}
	}

	return 0;
}

int main(){
	ios_base::sync_with_stdio(false);

	

	return 0;
}

