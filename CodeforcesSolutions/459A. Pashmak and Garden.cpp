#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int x1,y1,x2,y2;
    cin >> x1 >> y1 >> x2 >> y2;
    
    if(x1==x2){
		cout << abs(y2-y1)+x1 << " " << y1 << " ";
		cout << abs(y2-y1)+x1  << " " << y2 << endl;
	}
	else if(y1==y2){
		cout << x1 << " " <<abs(x2-x1)+y1 << " ";
		cout << x2  << " " << abs(x2-x1)+y1 << endl;
		}
	else if(abs(x2-x1) == abs(y2-y1)){
		cout << x1 << " " << y2 << " ";
		cout << x2 << " " << y1 << endl;
		}
	else 
		cout << -1 << endl;
		
		
    

}
