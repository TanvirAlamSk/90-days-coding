#include<bits/stdc++.h>
using namespace std;

void solve(){
	int i,n,ind=0,y=0;
	string s;
	
	cin>>n>>s;
	
	for(i=0;i<n;i++){
		if(s[i]=='I'){
			ind++;
		}else if(s[i]=='Y'){
			y++;
		}
	}
	
	if(ind){
		cout<<"INDIAN\n";
	}else if(y){
		cout<<"NOT INDIAN\n";
	}else{
		cout<<"NOT SURE\n";
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


