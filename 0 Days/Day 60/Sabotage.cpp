#include<bits/stdc++.h>
using namespace std;

int solve(){
	int i,n,x,k,cnt=0;
	cin>>n>>x>>k;
	vector<int>vt(n);
	
	for(i=0;i<n;i++){
		cin>>vt[i];
	}
	sort(vt.begin(),vt.end());
	i=n-1-k;
	x+=(100*k);
	while(i>=0){
		if(vt[i]>x){
			cnt++;
		}
		i--;
	}
	
	cout<<cnt+1<<endl;
	
	return 0;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T=1;
    cin>>T;
    
    while(T--){
		solve();
	}

}

