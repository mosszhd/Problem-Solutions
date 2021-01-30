#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t,in[100];
    cin >> t;
    
    for(int i =1;i<=t;i++)	
		cin >> in[i];
		
	for(int i =1;i<=t;i++){
		for(int j=1;j<=in[i];j++){
			cout << j%in[i]+1 << " ";
			}
			cout << endl;
		}
}
