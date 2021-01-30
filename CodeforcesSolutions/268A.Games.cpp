#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t,count=0;
    cin >> t;
    int h[t];
    int a[t];
    
    for(int i=0;i<t;i++){
		cin >> h[i];
		cin >> a[i];
		}
	for(int i=0;i<t;i++){
		for(int j=0;j<t;j++){
			if(h[i] == a[j])
				count++;
			}

		}
	cout << count;

}
