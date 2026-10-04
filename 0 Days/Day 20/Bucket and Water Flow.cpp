#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,w,x,y,z;
	cin>>t;
	
	while(t--){
		cin>>w>>x>>y>>z;
		
		if(x>w+y*z){
			cout<<"Unfilled"<<endl;
		}else if(x<w+y*z){
			cout<<"overFlow"<<endl;
		}else{
			cout<<"filled"<<endl;
		}
		
	}
	
	return 0;
}


