#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main()
{
    string t,h,output;
    
    cin >> t;
    
    for(int i = 0 ; i<5 ; i++){
		cin >> h;
		
		if(h[0] == t[0] || h[1] == t[0] || h[0] == t[1] || h[1] == t[1]){
			output = "YES";
			break;
			} 
		else 
			output = "NO";
		
		}
		
		cout << output;
}
