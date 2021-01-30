#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
	int t,n,num;
	cin >> t;
	for(int i =0;i<t;i++){
		cin >> n;
		if(n==1)
			cout << 0 << endl;
		else if(n==2)
			cout << 1;
		else{
			
			for(int j=1;j<=n/2;j++){
			if(n%j==0){
				num = j;
				}
			}
			cout << (n/num) + ((n/num)-1);
			}
			
		}
		
}
