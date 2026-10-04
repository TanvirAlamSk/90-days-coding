#include<bits/stdc++.h>
using namespace std;

const int mx=1e5+5;

int gcd(int x,int y){
	if(x%y==0){
		return y;
	}
	
	return gcd(y,x%y);
}

void solve(){
	long long x,y,ans;
	cin>>x>>y;
	if(x<y){
		x=x+y;
		y=x-y;
		x=x-y;
	}
	
	if(x%2==0 && y%2==0){
		ans=0;
	}else if(gcd(x,y)>1){
		ans=0;
	}else if(gcd(x+1,y)>1 || gcd(x,y+1)>1){
		ans=1;
	}else{
		ans=2;
	}
	cout<<ans<<endl;
	
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

