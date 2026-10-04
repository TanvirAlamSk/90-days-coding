#include<bits/stdc++.h>
using namespace std;

int solve(){
	float h,c,t;
	
	cin>>h>>c>>t;
		
	if(h>50 && c<.7 && t>5600){
		cout<<10<<endl;
	}else if(h>50 && c<.07){
		cout<<9<<endl;
	}else if(c<.07 && t>5600){
		cout<<8<<endl;
	}else if(h>50 && t>5600){
		cout<<7<<endl;
	}else if(h>50 || c<.07 || t>5600){
		cout<<6<<endl;
	}else{
		cout<<5<<endl;
	}
	
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


