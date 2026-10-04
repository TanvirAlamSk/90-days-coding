#include<bits/stdc++.h>
using namespace std;

int solve(){
	int a,b,c,x,co,cu;
	
	cin>>a>>b>>c>>x;
	
	co=a*b*c;
	cu=x*x*x;
	
	if(co==cu){
		cout<<"Equal"<<endl;
	}else if(co>cu){
		cout<<"Cuboid"<<endl;
	}else{
		cout<<"Cube"<<endl;
	}
	
	return 0;
}

int main(){
	
	//int t;
	//cin>>t;
	//while(t--){
		solve();
	//}
	
	return 0;
}

