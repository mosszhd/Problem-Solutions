#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
	int n,p,q,l;
	cin >> n;
	set<int> s1;
	
		cin >> p;
		while(p--){
			cin >> l;
			s1.insert(l);
			}
		cin >> q;
		while(q--){
			cin >> l;
			s1.insert(l);
			}

		
		int size = s1.size();
		if(size == n){
			cout << "I become the guy." << endl;
			}
		else 
			cout << "Oh, my keyboard!"<< endl;
		
}
