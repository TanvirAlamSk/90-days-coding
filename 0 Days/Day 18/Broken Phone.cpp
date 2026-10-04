#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,x,y;
	
	cin>>t;
	
	while(t--){
		cin>>x>>y;
	
		if(x>y){
			cout<<"NEW PHONE"<<endl;
		}else if(x<y){
			cout<<"REPAIR"<<endl;
		}else{
			cout<<"ANY"<<endl;
		}
	}
	
	return 0;
}


