#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,x,y,temp,o,e;
	cin>>t;
	
	while(t--){
		cin>>x>>y;
		o=0,e=0;
		
		for(temp=x;temp<=y;temp+=x){
			if(temp%2==0){
				e+=temp;
			}else{
				o+=temp;
			}
		}
		
		if(e<o){
			cout<<"NO"<<endl;
		}else{
			cout<<"YES"<<endl;
		}
	}
	return 0;
}
