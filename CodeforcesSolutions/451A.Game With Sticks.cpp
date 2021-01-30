#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int i,j;
    cin >> i >> j;
   
	if(i<=j){
		if(i%2==0){
			cout << "Malvika" << endl;
			}
		else 
			cout << "Akshat" << endl;
		}
	else{
		if(i>j){
		if(j%2==0){
			cout << "Malvika" << endl;
			}
		else 
			cout << "Akshat" << endl;
		}
	}

}
