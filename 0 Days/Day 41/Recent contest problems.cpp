#include<bits/stdc++.h>
using namespace std;

int solve(){
	int i,n,s=0,l=0;
	cin>>n;
	string st;
	
	for(i=0;i<n;i++){
		cin>>st;
		if(st=="START38"){
			s++;
		}else{
			l++;
		}
	}
	
	cout<<s<<" "<<l<<endl;
	
	
	return 0;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int T;
	cin>>T;
	while(T--){
		solve();
	}
	
	return 0;
}



