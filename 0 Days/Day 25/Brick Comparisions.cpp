#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,n,i,ui,mx,mxi;
	cin>>t;
	
	while(t--){
		cin>>n;
		mx=0;
		mxi=0;
		for(i=0;i<n;i++){
			cin>>ui;
			if(mx<ui){
				mx=ui;
				mxi=i+1;
			}
		}
		cout<<mxi<<endl;
	}
	
	return 0;
}



