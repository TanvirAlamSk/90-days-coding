#include<bits/stdc++.h>
using namespace std;

int solve(){
	int a,b,c;
	cin>>a>>b>>c;
	
	if(a>b && a>c){
		cout<<"Alice"<<endl;
	}else if(b>a && b>c){
		cout<<"Bob"<<endl;
	}else{
		cout<<"Charlie"<<endl;
	}
	
	return 0;
}

int main(){
	int t;
	cin>>t;
	
	while(t--){
		solve();
	}
	
	return 0;
}


