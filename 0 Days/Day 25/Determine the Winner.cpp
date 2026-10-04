#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,a,b,p,q;
	cin>>t;
	
	while(t--){
		cin>>a>>b;
		p=max(a,b);
		cin>>a>>b;
		q=max(a,b);
		
		if(p>q){
			cout<<"Q"<<endl;
		}else if(p<q){
			cout<<"P"<<endl;
		}else{
			cout<<"TIE"<<endl;
		}
		
	}
	
	return 0;
}




