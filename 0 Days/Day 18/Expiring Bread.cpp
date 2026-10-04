#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,n,m,k;
	
	cin>>t;
	
	while(t--){
		cin>>n>>m>>k;
	
		if((n+k-1)/k>m){
			cout<<"No"<<endl;
		}else{
			cout<<"Yes"<<endl;
		}
	}
	
	return 0;
}

