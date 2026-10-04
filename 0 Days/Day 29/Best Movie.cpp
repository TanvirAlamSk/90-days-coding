#include<bits/stdc++.h>
using namespace std;


void solve(){
	int n,i,x,y,rent=10001;
	
	cin>>n;
	
	for(i=0;i<n;i++){
		cin>>x>>y;
		
		if(x>6 && y<rent){
			rent=y;
		}
	}
	
	if(rent==10001){
		cout<<-1<<endl;
	}else{
		cout<<rent<<endl;
	}
	
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T;
	cin>>T;
	
	while(T--){
		solve();
	}
	
	return 0;
}






