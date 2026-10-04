#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,n,i,ui,sum;
	cin>>t;
	
	while(t--){
		cin>>n;
		sum=0;
		for(i=1;i<=n;i++){
			cin>>ui;
			sum+=ui;
		}
		
		if(sum%2==0){
			cout<<"Yes"<<endl;
		}else{
			cout<<"No"<<endl;
		}
	}
	
	return 0;
}


