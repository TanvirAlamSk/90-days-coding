#include<bits/stdc++.h>
using namespace std;

void solve(){
	int i,j,n,mxh;
	cin>>n;
	vector<int>vt(n),high(n);
	//set<pair<int,int>st;
	
	for(i=0;i<n;i++){
		cin>>vt[i];
	}
	high[n-1]=-1;
	mxh=vt[n-1];
	//st.insert({vt[n-1],n-1})
	i=n-1;
	
	while(i--){
		if(vt[i]>=mxh){
			high[i]=-1;
			mxh=vt[i];
		}else{
			for(j=i+1;j<n;j++){
				if(vt[j]>vt[i]){
					high[i]=vt[j];
					break;
				}
			};
		}
	}
	
	for(auto it:high){
		cout<<it<<" ";
	}
	cout<<endl;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T=1;
	//cin>>T;
	while(T--){
		solve();
	}
	return 0;
}


