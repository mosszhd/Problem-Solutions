#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int n,c0,c1,h,t;
    string s1;
    cin >> t;
    
    for(int i=0;i<t;i++){
		int cc0=0,cc1=0,res=0;
		cin >> n >> c0 >> c1 >> h;
		cin >> s1;
		
		for(char s: s1){
			cc0+=(s=='0');
			cc1+=(s=='1');
			}
		
		res = cc0*c0 + cc1*c1;
		
		if(c0<c1 && h<c1)
			res = c0*cc0 + h*cc1 + cc1*c0;
		else if(c1<c0 && h<c0)
			res = c1*cc1 + h*cc0 + cc0*c1;
		
		cout << res << endl;
		}

}
