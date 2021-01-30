#include<bits/stdc++.h>
#include<set>
using namespace std;

int main()
{
    set <int, greater <int> > unique;
    int t,n,s,r,a;
    cin >> t;
    while(t--){
		cin >> n;
	for(int i =0; i<n;i++){
		cin >> a;
		unique.insert(a);
	}
	
	if(n<2)
		cout << 0 << endl;
	else if(n==2)
		cout << 1  << endl;
	else if(n>2){
		s= unique.size();
		r = n-s;
		cout << r <<"  " << s << " " << n << endl;
		if(n==s)
			cout << 1 << endl;
		else if(s>r){
			if(s-r==1)
				cout << r  << endl;
			}
		else if(r>s){
			if(r-s>1)
				cout << s+1 << endl;
			else if(r-s==1)
				cout << s;
			}
				
		}

	}
}
