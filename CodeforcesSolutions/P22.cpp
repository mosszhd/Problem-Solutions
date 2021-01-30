#include<bits/stdc++.h>
using namespace std;

int main()
{
    int best = 0,sum=0;
    int a[10] = {-1,2,4,-10,5,2,-5,7};
    int n = sizeof(a)/sizeof(a[0]);
    
    for(int i = 0; i<n; i++){
		cout << "a[i]= " << a[i] << " sum&a[i]= " << " " << sum << "+" << a[i]<< " sum+a[i] = " <<  sum+a[i] << endl;
		sum = max(a[i],sum+a[i]);
		
		
		cout << best << " "  << sum << endl; 
		best = max(best,sum);
		//cout << "best= " << best<< endl; 
		}
		
		cout << best;
    
}
