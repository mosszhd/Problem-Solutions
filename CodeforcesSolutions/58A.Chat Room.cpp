
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int count =0;
    string str = "hello";
    string inp;
    cin >> inp;
    for(size_t i = 0;i<str.size(); i++){
		for(size_t j =0;j<inp.size();j++){
			if(str[i]==inp[j]){
				count+=1;
				inp[j]=' ';
				break;
			}
			else
				inp[j]=' ';
			}
		}
		if(count==5)
			cout << "YES";
		else
			cout << "NO";
}
