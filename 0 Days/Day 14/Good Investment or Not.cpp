#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,x,y;
	cin>>t;
	
	while(t--){
		cin>>x>>y;
		
		if(x/2<y){
			cout<<"NO"<<endl;
		}else{
			cout<<"YES"<<endl;
		}
	}
	
	return 0;
}
