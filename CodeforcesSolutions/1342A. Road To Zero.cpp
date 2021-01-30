#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    long long int a,b,x,y,n,big,small;
    long long int ans = 0;
 
    cin >> n;
    while(n--){
		cin >> a >> b;
		cin >> x >> y;
		if(a==0 && b==0)
			ans = 0;
		if((a>0 || b>0 && a!=b){
			if(a>b){
				big = a;
				small = b;
				}
			else {
				big = b;
				small = a;
				}
			ans = ((big - small) * x) + min((small*y),(small+small)*x);
				
			}
		else if(a<0 || b<0){
			ans = abs(a*x) + abs(b*x);
			}
		else if(a==b){
			ans = min(abs(a*y),(a+a)*x);
			}
    cout << ans << endl;
		}
		
		
    
    

}
