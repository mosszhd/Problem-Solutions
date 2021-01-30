#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int x[100],y[100],z[100];
    int xSum=0,ySum=0,zSum=0,n;
    cin >> n;
    for(int i=0;i<n;i++){
		cin >> x[i] >> y[i] >> z[i];
		xSum += x[i];
		ySum += y[i];
		zSum += z[i];
		//cout << xSum << " " << ySum << " " << zSum << endl;
		}
	if(xSum == 0 && ySum==0 && zSum==0)
		cout << "YES" << endl;
	else 
		cout << "NO" << endl;

}
