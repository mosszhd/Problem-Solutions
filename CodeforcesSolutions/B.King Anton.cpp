#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,an,bn;
    cin >> t >> n;
    int a[n];
    int b[n];
    string res;
    
  while(t--){
	   for(int i = 0; i<n; i++){
		   cin >> an;
			a[i] = an;
	   }
	  
	  for(int i = 0; i<n; i++){
		   cin >> bn;
			b[i] = bn;
	   }
	   
	   for(int i = 0 ; i<n;i++){
		   res = "";
		   if(a[0] == 0)
			   res = "NO";	  
		   else if(a[0] < b[0]){
			   res = "NO";
			   }
		   else if(a[i]< b[i+1]){
				 res =  "NO";
			}
			else if(a[i] > b[i+1]){
					res =  "YES";
				}
				
			 }
				cout << res << endl;
		   
		   }
		   
		   
	  
	  
  }
	  

