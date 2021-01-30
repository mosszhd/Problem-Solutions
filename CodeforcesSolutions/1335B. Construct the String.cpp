#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,s,a,b;
    
    char c;
    cin >> t;
    while(t--){
		string n="";
		cin >> s >> a >> b;
	for(int i = 0; i<s;i++){
		c = 97+(i%b);
		n += c;
		}
		cout << n << endl;
    
    
}
}
