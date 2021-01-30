#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int count = 0;
    
    while(n!=0){
		if(n%100==0){
			n -= 100;
			count += 1;
			}
		else if(n%20==0){
			n -= 20;
			count += 1;
			}
		else if(n%10==0){
			n -= 10;
			count += 1;
			}
		else if(n%5==0){
			n -= 5;
			count += 1;
			}
		else if(n%1==0){
			n -= 1;
			count += 1;
			}
			
		}
		
		cout << count;
}
