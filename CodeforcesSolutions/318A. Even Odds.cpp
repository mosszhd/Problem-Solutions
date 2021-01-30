#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    long long int a,b,res;
    
    cin >> a >> b;
    
    if(a%2==0)
		res = a/2;
	else 
		res = (a+1)/2;
	
	if(b<=res)
		cout << (b*2) - 1;
	else 
		cout << (b-res) * 2;
		

}
