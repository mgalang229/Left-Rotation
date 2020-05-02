#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll a[1000000], n, d, t;

// Almost correct version--
void solve(){
	int cnt = 0;
	cin >> n >> d;
	for(int i = 0; i < n; i++){
		cin >> a[i];	
	}
	for(int i = 0; i <= d-1; i++){
		for(int j = 0; j < n-1; j++){
			t = a[j];
			a[j] = a[j+1];
			a[j+1] = t;
		}
	}
	for(int i = 0; i < n; i++){
		cout << a[i] << " ";
	}
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	solve();
	return 0;
}
