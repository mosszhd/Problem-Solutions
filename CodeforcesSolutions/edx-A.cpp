#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("input.txt", "rt", stdin);
   // freopen("output.txt", "wt",stdout);
    
    int a , b , n;
    int maxa = 0 , maxb = 0 ;
    
    cin >> n;
    
    
    for(int i = 0; i<n; i++){
		cin >> a;
		if(a > maxa){
			maxa = a;
			}
		}
	for(int i = 0; i<n; i++){
		cin >> b;
		if(b > maxb){
			maxb = b;
			}
		}
	cout << maxa+maxb;
	
}
