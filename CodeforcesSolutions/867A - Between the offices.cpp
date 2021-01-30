#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
	int n,cF=0,cS=0 ;
	cin >> n;
	char days[n];
	int i = 0;
	while(n--){
		cin >> days[i];
		i++;
		}
		
	for(int i = 0 ; i<n ; i++){
		cin  >> days[i];
		
		}
		
	for(int i = 0 ; i <n; i++){
		if(days[i] == 'F' && days[i+1] == 'S')
			cF++;
		else if(days[i] == 'S' && days[i+1] == 'F')
			cS++;
	
		}
	if(cF<cS)
		cout << "YES";
	else 
		cout << "NO";
}
