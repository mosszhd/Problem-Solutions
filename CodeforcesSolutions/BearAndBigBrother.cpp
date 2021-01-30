#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a , b , count = 0;
    cin >> a >> b;
    
    while(true){
		if(a > b)
			break;
		else if(a<=b){
			count += 1;
			a*=3;
			b*=2;
		}
		
		
		}
		
		cout << count;
}
