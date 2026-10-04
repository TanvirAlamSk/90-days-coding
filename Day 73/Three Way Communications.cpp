#include<bits/stdc++.h>
using namespace std;

void solve(){
	double r,x1,x2,x3,y1,y2,y3;
	bool d1,d2,d3;
	cin>>r>>x1>>y1>>x2>>y2>>x3>>y3;
	r=r*r;
	
	d1=(x1-x2)*(x1-x2)+(y1-y2)*(y1-y2)<=r;
	d2=(x2-x3)*(x2-x3)+(y2-y3)*(y2-y3)<=r;
	d3=(x3-x1)*(x3-x1)+(y3-y1)*(y3-y1)<=r;
	
	if(d1+d2+d3>=2){
		cout<<"yes\n";
	}else{
		cout<<"no\n";
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

