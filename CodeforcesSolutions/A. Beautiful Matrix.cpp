#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int arr[6][6];
    int res;
    for(int i=1;i<6;i++){
		for(int j=1;j<6;j++){
			cin >> arr[i][j];
			if(arr[i][j] ==1){
				res = abs(3-j)+abs(3-i);
				//cout << i << " " << j;
				}
				
			}
		}
		
		cout << res;

}
