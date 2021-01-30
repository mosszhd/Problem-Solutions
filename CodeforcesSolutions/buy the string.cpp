#include <bits/stdc++.h>
using namespace std;
 
signed main() {
	ios::sync_with_stdio(0); cin.tie(0);
 
	int t; cin >> t;
	while (t--) {
		int n, c0, c1, h;
		cin >> n >> c0 >> c1 >> h;
		string s; cin >> s;
 
		int o = 0, z = 0;
		for (char c: s) {
			o += (c == '1');
			z += (c == '0');
		}
 
		int ans = o*c1 + z*c0;
		for (int one = 0; one <= s.size(); one++) {
			int zero = s.size() - one;
			ans = min(ans, one*c1 + zero*c0 + h*abs(o - one));
		}
		cout << ans << '\n';
	}
	
	return 0;
}
