#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int n,m,a,b;
    cin >> n >> m >> a >> b;
    
    if(a*m > b){
			cout << ((n/m)*b) + min(((n%m)*a),b);
		}
	else if(a*m<=b)
		cout << a*n;

}
