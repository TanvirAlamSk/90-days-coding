#include<bits/stdc++.h>
using namespace std;

void solve(){
	char arr[6];
	int i,flag=0,h=0;
	
	for(i=0;i<6;i++){
		cin>>arr[i];
		if(arr[i]=='W'){
			flag++;
		}else{
			flag=0;
		}
		
		if(flag>=3){
			h=1;
		}
	}
	
	if(h){
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int T=1;
	cin>>T;
	while(T--){
		solve();
	}
	
	return 0;
}

