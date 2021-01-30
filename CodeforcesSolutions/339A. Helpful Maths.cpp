#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    char n;
    int len;
    
    cin >> s;
    len = s.length();

    
    for(int i=0; i<len ; i=i+2){
		for(int j=i+2;j<len;j=j+2){
			if(s[i]>s[j]){
				n = s[i];
				s[i] = s[j];
				s[j] = n;
			}
			
		 }   
	}
	
	
	cout << s;
}
