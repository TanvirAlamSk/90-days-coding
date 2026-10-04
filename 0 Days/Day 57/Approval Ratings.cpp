#include<bits/stdc++.h>
using namespace std;

void solve(){
	int i,sum=0,ans=0;
	vector<int>vt(5);
	
	for(i=0;i<5;i++){
		cin>>vt[i];
		sum+=vt[i];
	}
	
	sort(vt.begin(),vt.end());
	
	if(sum<35){
		for(i=0;i<5;i++){
			sum+=(10-vt[i]);
			ans++;
			if(sum>=35){
				break;
			}
		}
		cout<<ans*100<<endl;
	}else{
		cout<<0<<endl;
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


