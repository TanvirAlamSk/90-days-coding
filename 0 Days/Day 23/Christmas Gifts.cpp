#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,h,l,w,ans;
	cin>>t;
	
	while(t--){
		cin>>h>>l>>w;
		ans=2*(h*l+l*w+w*h);
		
		cout<<1000/ans<<endl;	
	}
	
	return 0;
}

