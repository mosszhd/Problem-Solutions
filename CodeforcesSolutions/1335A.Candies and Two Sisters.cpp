#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,res=0;
    cin >> t;
    while(t--){
		cin >> n;
	if(n<=2)
		res =0;
	else if(n%2==0){
		res = (n/2) - 1;
	}
	else if(n%2==1){
		res = (n/2);
		
	}
		cout << res << endl;
		}
	
}
