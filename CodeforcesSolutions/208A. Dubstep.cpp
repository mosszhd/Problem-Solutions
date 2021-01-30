#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    string remix;
    cin >> remix;
    string word = "WUB";
    string res;
    for(auto i=0; i<remix.size();i++){
		if(remix.substr(i,3) == word){
				if(i>0 && remix[i-1] != ' ')
					remix.replace(i,3," ");
				else{
					remix.replace(i,3,"");
					i = i-1;
					}
				
				}
				
				
			}
			
	
	
	cout << remix;


}
