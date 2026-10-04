#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,a,b,c,x,ans;
	cin>>t;
	
	while(t--){
		cin>>a>>b>>c>>x;
		int mn =min(min(a,b),c);
		ans=a+b+c-mn;
		
		if(ans>=x){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}
	
	return 0;
}

