#include<bits/stdc++.h>
using namespace std;

int main()
{
	int s1,s2,q,y;
	cin >> s1 >> s2;
	string m[s1];
    string n[s2];
    string res;
    
	for(int i = 0 ; i<s1; i++){
		cin >> m[i];
		}
	for(int i = 0 ; i<s2; i++){
		cin >> n[i];
		//cout << n[i] << " ";
		}
	cin >> q;
	
	while(q--){
		res = " ";
		cin >> y;
		res = m[((y-1)%s1)] + n[((y-1)%s2)];
		cout << res << "\n";
	
		}
    
}
