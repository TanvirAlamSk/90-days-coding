#include<bits/stdc++.h>
using namespace std;

void solve(){
	int i,n,b,f=0;
	cin>>n>>b;
	vector<int>vt(n);
	int l=0,r=0;
	
	if(b<0){
		b=0-b;
	}
	
	for(i=0;i<n;i++){
		cin>>vt[i];
	}
	
	sort(vt.begin(),vt.end());
	
	while(r<n){
		if(l==r){
			r++;
			continue;
		}
		
		if(vt[r]-vt[l]==b){
			f=1;
			break;
		}else if(vt[r]-vt[l]>b){
			l++;
		}else{
			r++;
		}
	}
	
	if(f){
		cout<<"1\n";
	}else{
		cout<<"0\n";
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

