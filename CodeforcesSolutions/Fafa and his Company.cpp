#include<bits/stdc++.h>
using namespace std;

int main()
{
    // n employees
    //divide the task among employees
    
    // best l employees as leaders for new project
    //employees number should be same
    
    int n,e, count = 0 ;
    cin >> n;
    
    for(int i = 1;i<n;i++){
			e = n-i;
			if(e%i==0){
				count+=1;
				}
			
		
		}
    
    cout << count;
}
