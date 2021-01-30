#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main()
{
	int n,opi;
	string res;
	cin >> n;
	
	while(n--){
		cin >> opi;
		
		if(opi == 0)
			res = "EASY";
		else if(opi == 1){
			res = "HARD";
			break;
		}
	}
		cout << res;
			
	
	
    
}
