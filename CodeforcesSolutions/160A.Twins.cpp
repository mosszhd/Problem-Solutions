#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int sum =0 , res =0 , count =0;
	int a[100];
	
    for(int i =0;i<n;i++){
			cin >> a[i];
			sum += a[i];
		}
		sort(a,a+n);

	for(int i=n-1;i>=0;i--){
		res += a[i];
		count+=1;
		if(res>(sum-res))
			break;
	}
		
		cout << count;
	}
