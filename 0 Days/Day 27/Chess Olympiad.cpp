#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int x,y,z,rm;
	
	cin>>x>>y>>z;
	
	rm=4-x-y-z;
	
	if(rm+x>z){
		cout<<"Yes"<<endl;
	}else{
		cout<<"No"<<endl;
	}
	
	
	
	return 0;
}
