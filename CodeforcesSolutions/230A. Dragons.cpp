#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
	int a,b,t,s,count=0;
	vector<pair<int,int>> v;
	cin >> s >> t;
	for(int i=0;i<t;i++){
		cin >> a >> b;		
		v.push_back({a,b});
		}
	
	sort(v.begin(),v.end());
	for(int i=0;i<t;i++){
		if(v[i].first<s){
				s=s+v[i].second;
				count++;
			}
		}
	if(count==t)
		cout << "YES" << endl;
	else 
		cout << "NO" << endl;
}
