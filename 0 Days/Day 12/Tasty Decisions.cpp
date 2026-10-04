#include<bits/stdc++.h>
using namespace std;

int solve(){
	int x,y,ch,ca;
	cin>>x>>y;
	
	ch=x*2;
	ca=y*5;
	
	if(ch==ca){
		cout<<"Either"<<endl;
	}else if(ch>ca){
		cout<<"Chocolate"<<endl;
	}else{
		cout<<"Candy"<<endl;
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



