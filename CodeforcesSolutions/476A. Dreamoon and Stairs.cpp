#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int n,m,i;
    cin >> n >> m;
    int min_steps = (n/2)+(n%2);
    for(i=min_steps;i<=n;i++){
		if(i%m==0){
			cout << i;
			break;
		}
	}

	if(i == n+1){
		cout << -1 ;
		}

}
