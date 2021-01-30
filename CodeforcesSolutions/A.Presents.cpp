#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int n;
    cin >> n;
    int friends[n];
    int to_gift[n];
    for(int i=1;i<=n;i++){
		cin >> friends[i];
		to_gift[friends[i]] = i;
		}
	for(int i=1;i<=n;i++){
		cout << to_gift[i] << " ";
		}

}
