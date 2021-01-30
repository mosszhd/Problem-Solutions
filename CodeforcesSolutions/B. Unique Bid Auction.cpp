#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
	int t,n,arr[200000];
	cin >> t;
	while(t--){
		cin >> n;
		int c=0;
		int min = 2147483647;
		for(int k=1;k<=n;k++)
			cin>>arr[k];
		for(int i =1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(arr[i]==arr[j]) c++;
				if(c<2 && arr[i]<min)
					min = i;
					
				}
			}
			cout << min << endl;
		}
		
}
