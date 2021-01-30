#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,num;
    cin >> n;
    cin.ignore();
    string w;
    for(int i = 0 ; i<n; i++){
		getline(cin,w);
		num = w.length();
		if(num>10)
			cout<<w[0]<<num-2<<w[num-1]<<"\n";
		else 
			cout << w << endl;
	}
	
    
    
}
