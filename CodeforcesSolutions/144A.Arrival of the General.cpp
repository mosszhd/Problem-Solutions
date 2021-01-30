#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int n[100];
    int t;
    int greatest=0;
    int greatIndex;
    int lowest;
    int lowestIndex = 0;
    cin >> t;
    for(int i=0;i<t;i++){
		   cin >> n[i];
		}
	lowest = n[0];
	for(int i=0;i<t;i++){
		if(n[i]>greatest){
			greatest = n[i];
			greatIndex=i;
			}	
		if(n[i]<=lowest){
			lowest = n[i];
			lowestIndex = i;
			}	
		}
		//cout << greatIndex << " " << lowestIndex << endl;
	
		if(greatIndex > lowestIndex){
			cout << (greatIndex ) + (t -lowestIndex -2);
			}
		else 
			cout << (greatIndex ) + (t-lowestIndex-1);
	

}
