#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,k,r;
	cin>>n>>k>>r;
	
	if(k>n){
		cout<<0<<endl;
	}else{
		cout<<(n-k)*r<<endl;
	}
	
	return 0;
}


