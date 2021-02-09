#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int n,skill;
    vector<int> v[4];
    cin >> n;
    for(int i=1;i<=n;i++){
		cin >> skill;
		v[skill].push_back(i);
		}
	int comp = INT_MAX;
	for(int i=1;i<=3;i++){
		int size_vector = v[i].size();
		int minimum = min(comp,size_vector);
		comp = minimum;
		}
	cout << comp << endl;
	for(int i=0;i<comp;i++)
		cout << v[1][i] << " " << v[2][i] << " "<< v[3][i] << endl;
		//<< v[1][i] << " " << v[2][i] << " " << v[3][i];
	
}
