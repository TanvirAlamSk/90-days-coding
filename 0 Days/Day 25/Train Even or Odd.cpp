#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,n,i,ui,o,e;
	cin>>t;
	
	while(t--){
		cin>>n;
		o=0,e=0;
		
		for(i=1;i<=n;i++){
			cin>>ui;
			if(i%2==1){
				o+=ui;
			}else{
				e+=ui;
			}
		}
		cout<<max(o,e)<<endl;
	}
	
	return 0;
}

