#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
	int n,m,quantity[10000],min = INT_MAX;
	cin >> n >> m;
	for(int i=0;i<m;i++){
		cin >> quantity[i];
		}
	sort(quantity,quantity+m);

	for(int i =0;i<=m-n;i++){
		//cout << quantity[i+(n-1)] << " " << quantity[i];
		if(quantity[i+(n-1)]-quantity[i] < min){
			min = quantity[i+(n-1)]-quantity[i];
		}
		}
		
	cout << min << endl;
	
}
