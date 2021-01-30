#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main()
{
	int q;
	int n;
	
	cin >> q;
	
	while(q--){
		cin >> n;
		if(n==2){
			cout << 2 << "\n";
		}
		else if(n%2==1){
			cout << 1  << "\n";
			}
		else 
			cout << 0  << "\n";
		
		}
}
