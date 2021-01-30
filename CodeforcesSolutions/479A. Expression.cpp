#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
	int a,b,c;
	cin >> a >> b >> c;
	int greatest = 0;
	
	if((a+b*c)>greatest)
		greatest = (a+b*c);
	if(a*(b+c)>greatest)
		greatest = a*(b+c);
	if(a*b*c > greatest)
		greatest = a*b*c;
	if((a+b)*c>greatest)
		greatest = (a+b)*c;
	if(a+b+c>greatest)
		greatest = a+b+c;
		
	cout << greatest;
}
