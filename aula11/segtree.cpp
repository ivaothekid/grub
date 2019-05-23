#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define eb emplace_back
#define mk make_pair
#define fi first
#define se second
#define cc(x)	cout << #x << " = " << x << endl
#define ok		cout << "ok" << endl
#define endl '\n'

typedef long long ll;
typedef pair<int,int> ii;
const int INF = 0x3f3f3f3f;
const double PI = acos(-1.0);
 
const int N = 1e6 + 5;
int seg[4*N+1];

int query(int r, int i, int j, int a, int b){
	if(i > b or j < a) return 0;
	if(i >= a and j <= b) return seg[r];

	int mid = (i+j)/2;
	int left = query(2*r, i, mid, a, b);
	int right = query(2*r+1, mid+1, j, a, b);

	return left + right;
}

void update(int r, int i, int j, int no, int v){
	if(i > no or j < no) return;
	if(i == no and j == no){
		seg[r] = v;
		return;
	}

	int mid = (i+j)/2;
	update(2*r, i, mid, no, v);
	update(2*r+1, mid+1, j, no, v);

	seg[r] = seg[2*r] + seg[2*r+1];
	return;
}

int main() {
	ios_base::sync_with_stdio(false);

	int n;

			     
	return 0;
}

