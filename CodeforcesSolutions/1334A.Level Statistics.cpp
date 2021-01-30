#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    int n;
	int p[1000];
	int c[1000];
	cin >> t;
	string res;
	
	while(t--){
		res="";
		cin >> n;
		
		for(int i =0;i<n;i++){
			cin >> p[i] >> c[i];
		}
		for(int i =0;i<n;i++){
		if(p[i]<c[i]){
			res = "NO";
			break;
			}
		else 
			res = "YES";
			
		if(i>0){
			if(p[i]-p[i-1]<0){
			res = "NO";
			break;
			}
		else 
			res ="YES";
			
		if(c[i]-c[i-1]<0){
			res = "NO";
			break;
			}
		else
			res="YES";
			}
		
		}
				cout << res << "\n";
}

}
