#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n[4];
	int s = sizeof(n)/sizeof(n[0]);
    for(int i = 0 ; i<=3; i++){
		cin >> n[i];
		}
		
	sort(n,n+s);
	
	for(int i =0 ; i<=2 ; i++){
		cout << n[3] - n[i] << " ";
		}
	
	
}
