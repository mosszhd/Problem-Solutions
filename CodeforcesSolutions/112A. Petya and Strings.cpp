#include<bits/stdc++.h>
using namespace std;

int main()
{
	int i=0,res;
    string x;
    string z;
    
    cin >> x >> z;
    
    while(x[i]){
		x[i] = tolower(x[i]);
		z[i] = tolower(z[i]);
	
	if(x[i] == z[i])
		res = 0;
	else if(x[i] < z[i]){
		res = -1;
		break;
		}
	else 
		{
			res = 1;
			break;
		}
		
	i++;
		
		}
		cout << res << endl;
}
