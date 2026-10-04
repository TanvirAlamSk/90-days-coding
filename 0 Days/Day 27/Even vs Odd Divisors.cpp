#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int T;
	
	cin>>T;
	
	while(T--){
		int i,n,ev=0,od=0;
		cin>>n;
		
		for(i=1;i<=n;i++){
			if(n%i==0){
				if(i%2==0){
					ev++;
				}else{
					od++;
				}
			}
		}
		
		if(od<ev){
			cout<<1;
		}else if(od==ev){
			cout<<0;
		}else{
			cout<<-1;
		}
		
		cout<<endl;
	}
	
	
	
	return 0;
}

