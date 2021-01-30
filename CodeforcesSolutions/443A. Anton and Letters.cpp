#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    string line;
    getline(cin,line);
    int n = line.size();
    string s;
    int res = 0;
    set<string> s1;
    for(int i=1;i<n;i=i+3){
		s = line[i];
		s1.insert(s);
		}
		
	if(n==2)
		cout << res;
	else
		cout << s1.size();
		

}
